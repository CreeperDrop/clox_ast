.POSIX:

CC = cc
CFLAGS = -Wall -Wextra -Werror -O3

SRC_DIR = src
# OBJ = $(SRC:.c =.o)
# INC = -I$(wildcard include/*.h)
INC_DIR = include
INC = -I$(INC_DIR)

clox: $(SRC_DIR)/*.c $(INC_DIR)/*.h
	$(CC) $(SRC_DIR)/*.c $(INC) -o $@ $(CFLAGS) 
	chmod +x $@

clox_debug: $(SRC_DIR)/*.c $(INC_DIR)/*.h
	$(CC) $(SRC_DIR)/*.c $(INC) -o $@ $(CFLAGS) -g
	chmod +x $@

	
clean:
	rm -f src/*.o clox clox_debug
