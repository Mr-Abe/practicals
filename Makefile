# Use 'gcc' as our C Compiler
CC = gcc

# These are our compiler flags
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g

# Build both executables from same-named .c files
TARGETS = hello data circle ascii num_cat range control calc largest loops

# Default goal
all: $(TARGETS)

# Generic rule: build an executable from the same-named .c file
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# Optional: compile to object file if needed elsewhere
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: all clean
clean:
	rm -rf $(TARGETS) *.o *.dSYM