#!/bin/bash

#///////////////////////////////////
# creates a dynamic library      ///
# with all c files present in a  ///
# current directory in linux     ///
# //////////////////////////////////

FILE="liball.o"
FILE_SO="liball.so"
gcc -c -fPIC *.c -o "$FILE"
gcc -shared "$FILE" -o "$FILE_SO"
