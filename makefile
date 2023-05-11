SRC = $(shell find Satis/ -type f -name '*.cpp')

OBJ = $(SRC:.cpp=.o)

CC = x86_64-w64-mingw64-g++
CCL = g++

FLAG = -lncurses

NAME = SatisTUI

PACKAGES_NEEDED = build-essential libncurses5-dev libncursesw5-dev

all: $(NAME) 

$(NAME): $(OBJ)
	$(CCL) -o $(NAME) $(OBJ) $(FLAG)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

commit: clean
	git add .
	git commit -a

packages:
	apt-get install $(PACKAGES_NEEDED)

run: re 
	./$(NAME)

install: packages re
	rm -f /bin/$(NAME)
	mv ./$(NAME) /bin/$(NAME)