CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp \
			WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= Brain

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} $^ -o $@

%.o : %.cpp
	${CC} ${CFLAGS} -o $@ -c $<

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re