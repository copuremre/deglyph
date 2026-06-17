# Deglyph

A "number to alphabet" translator

## Overview
This program is a translator that maps the order of a letter in the english alphabet to the actual letter. For example: "7,12,25,16,8" is translated as "GLYPH"

This program is created with the intent of automating the burdensome number to character translations in the "Glyph" modpack for Celeste, although you can use it for other purposes where you need such a service.

## Using The Application

The project contains a <code>C</code> source code that has the implementation of the algorithm.

The input strings must be in the format:

<code>"X,X,X,X,X"</code>

Where X represents a number or whitespace. Whitespaces are not translated, so you can enter sentences:

<code>"4,5,5,26 14,21,20,19"</code>

You can decrypt multiple strings with one command by writing them back to back. This will print the decrypted strings seperated by newlines:

<code>"12,1,14,3,5,18" "6,1,14" "3,12,21,2"</code>

The program has an input validation mechanism, but it doesn't guarantee handling of all malformed inputs. If you fail to stay within the input restrictions, there may be edge cases that produce undefined behaviour.

## Licensing

Copyright 2026 Emre Çöpür, Licensed under GPL 3.0. See LICENSE for details.
