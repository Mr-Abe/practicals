# Use 'gcc' as our C Compiler
CC = gcc

# These are our compiler flags, just like before
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g

# This is the name of our final program
TARGET = hello

# 'all' is the default goal. It depends on our target.
all: $(TARGET)

# This is the "linking" rule.
# To build the TARGET, we need the "object" file: hello.o
$(TARGET): hello.o
	# The recipe to link.
	# '$@' means "the target" (hello)
	# '$^' means "the dependencies" (hello.o)
	$(CC) $(CFLAGS) -o $@ $^

# This is the "compiling" rule.
# To build hello.o, we need the "source" file: hello.c
hello.o: hello.c
	# The recipe to compile.
	# '-c' means "compile, don't link"
	# '$<' means "the first dependency" (hello.c)
	$(CC) $(CFLAGS) -c -o $@ $<

# This is a "phony" target to clean up our directory
.PHONY: clean
clean:
	# 'rm -f' means "force remove"
	rm -f $(TARGET) *.o