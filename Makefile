CC=gcc
OUTPUT=tetris
CFLAGS=-Wall #-Werror
LDFLAGS=-lSDL2 -lSDL2_image
SRC=main.c  draw.c init.c gestiontouche.c map.c pieces.c 
OBJ=$(SRC:.c=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJ)
	@echo "linking $@.."
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	@echo "$(CC) $@.."
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm *.o
	rm $(OUTPUT)
