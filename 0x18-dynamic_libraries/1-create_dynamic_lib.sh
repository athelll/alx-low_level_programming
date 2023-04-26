#!/bin/bash
#///////////////////////////////////
# creates a dynamic library      ///
# with all c files present in a  ///
# current directory in linux     ///
# //////////////////////////////////

# creates library
gcc -c -fPIC ./*.c
gcc -shared -o liball.so ./*.o

# deletes object file
rm ./*.o
