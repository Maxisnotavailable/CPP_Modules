CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS		= main.cpp AMateria.cpp Ice.cpp Cure.cpp \
			Character.cpp MateriaSource.cpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= Interface

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