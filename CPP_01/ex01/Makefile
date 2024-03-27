CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp Zombie.cpp zombieHorde.cpp
SRCSBONUS	= 
OBJS		= ${SRCS:.cpp=.o}
OBJSBONUS	= ${SRCSBONUS:.cpp=.o}
NAME		= zombieHorde

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} $^ -o $@

%.o : %.cpp
	${CC} ${CFLAGS} -o $@ -c $<

clean :
	rm -f ${OBJS} ${OBJSBONUS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re