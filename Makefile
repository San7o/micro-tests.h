## --- Settings ---

CFLAGS=-Wall -Werror -Wpedantic -ggdb -std=c99
LDFLAGS=
CC=gcc

OUT_NAME=test
OBJ=test.o\
    many_tests.o

# !!!
# !!! You need to use this linker script to register the tests !!!
# !!!
MICRO_TESTS_LINKER_SCRIPT=micro-tests.ld

## --- Commands ---

# --- Targets ---

all: $(OUT_NAME)

run: $(OUT_NAME)
	chmod +x $(OUT_NAME)
	./$(OUT_NAME)

# !!!
# !!! For compilation, you need to add  "-Wl,-T,${MICRO_TESTS_LINKER_SCRIPT}"
# !!!
$(OUT_NAME): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) $(CLAGS) -o $(OUT_NAME) -Wl,-T,${MICRO_TESTS_LINKER_SCRIPT}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJ) 2>/dev/null || :

distclean:
	rm $(OUT_NAME) 2>/dev/null || :
