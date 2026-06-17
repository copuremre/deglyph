#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc <= 1) {
        fprintf("Usage: deglyph [STRING]...\n");
        return 1;
    }
    
    for (int i = 1; i < argc; i++) {
        char* input_str = argv[i];
        char* decrypt_str = calloc(strlen(input_str) + 1, sizeof(char));
        char* word_token = NULL;
        char* num_token = NULL;
        int decrypt_index = 0;
        
        while ((word_token = strsep(&input_str, " ")) != NULL) {
            while ((num_token = strsep(&word_token, ",")) != NULL) {
                char* end;
                long val = strtol(num_token, &end, 10);
                if (*end != '\0' || end == num_token) {
                    fprintf(stderr, "Invalid token: %s\n", num_token);
                    free(decrypt_str);
                    return 1;
                }
                decrypt_str[decrypt_index++] = (char)(val + 64);
            }
            decrypt_str[decrypt_index++] = ' ';
        }
        decrypt_str[--decrypt_index] = '\0'; //Overwrites the last space

        printf("%s\n", decrypt_str);
        free(decrypt_str);
    }
    
    return 0;
}


