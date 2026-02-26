CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=prog

all: $(TARGET)

$(TARGET): src/main.c src/logic.c
	$(CC) $(CFLAGS) src/main.c src/logic.c -o $(TARGET)

clean:
	rm -f $(TARGET)
