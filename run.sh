#!/bin/zsh
# Usage:
#   ./run.sh solution.cpp          → compile and run (type input manually)
#   ./run.sh solution.cpp in.txt   → compile and run with input file

if [ -z "$1" ]; then
    echo "Usage: ./run.sh <file.cpp> [input_file]"
    exit 1
fi

FILE="$1"
BINARY="${FILE%.cpp}"
INPUT="$2"

# Compile with GCC using contest-standard flags
g++-15 -std=c++17 -O2 -Wall \
    -o "$BINARY" "$FILE"

if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

echo "Compiled OK → running...\n"

if [ -n "$INPUT" ]; then
    time ./"$BINARY" < "$INPUT"
else
    time ./"$BINARY"
fi
