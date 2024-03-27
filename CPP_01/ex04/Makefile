CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= replace

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} $^ -o $@

%.o : %.cpp
	${CC} ${CFLAGS} -o $@ -c $<

clean :
	rm -f ${OBJS}
	rm *.replace

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re