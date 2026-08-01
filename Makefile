CC = gcc

CFLAGS = -Iinclude

SRC = src/main.c \
      src/menu.c \
      src/basic.c \
      src/input.c

TARGET = calculator

$(TARGET): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET)

clean:
	del /Q calculator.exe