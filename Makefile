# SPDX-License-Identifier: MIT
# Author:  Giovanni Santini
# Mail:    giovanni.santini@proton.me
# License: MIT

#
# Compiler flags
#
CFLAGS=-Wall -Werror -Wpedantic -Wextra -ggdb -std=c99
LDFLAGS=
CC=gcc

OUT_NAME=test
OBJ=test.o\
    many_tests.o

# !!!
# !!! You need to use this linker script to register the tests !!!
# !!!
TESTS_LINKER_SCRIPT=micro-tests.ld
# !!!
# !!! For compilation, you need to add  "-Wl,-T,${MICRO_TESTS_LINKER_SCRIPT}"
# !!!
TESTS_LDFLAGS=-Wl,-T,${TESTS_LINKER_SCRIPT}

#
# Commands
#
all: $(OUT_NAME)

run: $(OUT_NAME)
	chmod +x $(OUT_NAME)
	./$(OUT_NAME)

clean:
	rm -f $(OBJ)

distclean:
	rm -f $(OUT_NAME)

$(OUT_NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(TESTS_LDFLAGS) $(CFLAGS) $(OBJ) -o $(OUT_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
