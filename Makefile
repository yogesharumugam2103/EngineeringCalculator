CC = gcc

CFLAGS = -Iinclude

SRC = src/main.c \
      src/menu.c \
      src/basic.c \
      src/input.c \
      src/utility.c \
      src/history.c \
      src/scientific.c \
      src/matrix.c \
      src/unit.c \
      src/number_system.c \
      src/statistics.c

TARGET = calculator

$(TARGET): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET)

clean:
	del /Q calculator.exe