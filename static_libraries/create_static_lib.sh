#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *glob* *.c
ar -rc liball.a *.o
ranlib liball.a
