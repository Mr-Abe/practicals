CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -O2

SRC_DIR := src/practicals
BIN_DIR := bin

# find all .c files and map to bin/<name>
SRCS := $(wildcard $(SRC_DIR)/*.c)
TARGETS := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SRCS))

.PHONY: all clean
all: $(TARGETS)

$(BIN_DIR)/%: $(SRC_DIR)/%.c | $(BIN_DIR)
    $(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR):
    mkdir -p $(BIN_DIR)

clean:
    rm -rf $(BIN_DIR)/*.o $(BIN_DIR)/*

# run an executable: make run NAME=<program>
.PHONY: run
run: all
    ./$(BIN_DIR)/$(NAME)