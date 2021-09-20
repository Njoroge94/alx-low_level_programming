#!/bin/bash
gcc *.c -c -Wall -Wextra -Werror -pedantic -fPIC
gcc *.o -shared -o liball.so
