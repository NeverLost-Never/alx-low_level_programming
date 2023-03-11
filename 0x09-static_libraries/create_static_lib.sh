#!/bin/bash

# Compile all .c files in the current directory and create object files with the same name
for file in *.c; do
    if [ -f "$file" ]; then
        gcc -c -fno-PIC "$file" -o "${file%.c}.o"
    fi
done
ar -rcs liball.a *o
