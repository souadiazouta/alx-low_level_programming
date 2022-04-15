#!/bin/bash
gcc -Wall -PEdantic -Werror -Wextra -c * .c
ar -rc liball.a * .o
