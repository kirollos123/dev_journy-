#!/bin/bash
# Compile and run C++ file dynamically

file="$1"
output_dir="$(dirname "$file")"
output_file="$output_dir/a.out"

g++ "$file" -o "$output_file"

if [ $? -eq 0 ]; then
    "$output_file"
else
    echo "Compilation failed!"
fi
