#!/bin/bash
for file in *.c; do
    output_file="${file%.c}.o"
    gcc -c "$file" -o "$output_file"
done
ar rcs liball.a *.o && ranlib liball.a
