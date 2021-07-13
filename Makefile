# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 19:58:00 by jodufour          #+#    #+#              #
#    Updated: 2021/07/13 23:22:55 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CC			=	gcc -c -o
LINKER		=	gcc -o
MAKEDIR		=	mkdir -p
RM			=	rm -rf

######################################
#             EXECUTABLE             #
######################################
NAME		=	generator

#######################################
#             DIRECTORIES             #
#######################################
SRCD		=	srcs/
OBJD		=	objs/
INCD		=	includes

LST_SRCD	=	lst/

######################################
#            SOURCE FILES            #
######################################
LST_SRCS	=	\
				ig_lst_add_back.c	\
				ig_lst_free.c		\
				ig_lst_init.c		\
				ig_lst_is_in.c		\
				ig_lst_print.c		\
				ig_lst_push_back.c

SRCS		=	\
				${addprefix			\
				${LST_SRCD},		\
					${LST_SRCS}}	\
				ig_check_args.c		\
				ig_err_msg.c		\
				ig_rand_gen.c		\
				ig_rand_gen_uniq.c	\
				main.c

######################################
#            OBJECT FILES            #
######################################
OBJS		=	${SRCS:.c=.o}
OBJS		:=	${addprefix ${OBJD}, ${OBJS}}

DEPS		=	${OBJS:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS		=	-Wall -Wextra -MMD -I ${INCD}
LDFLAGS		=	

ifeq (${DEBUG}, true)
	CFLAGS	+=	-g
endif

#######################################
#                RULES                #
#######################################
${NAME}:	${OBJS}
	${LINKER} $@ ${LDFLAGS} $^

all:	${NAME}

-include ${DEPS}

${OBJD}%.o:	${SRCD}%.c
	@${MAKEDIR} ${OBJD}
	@${MAKEDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME}

re:	fclean all

coffee:
	@echo '                                              '
	@echo '                   "   "                      '
	@echo '                  " " " "                     '
	@echo '                 " " " "                      '
	@echo '         _.-==="""""""""===-._                '
	@echo '        |=___    ~ ~ ~    ___=|=,.            '
	@echo '        |    """======="""    |  \\           '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |  //           '
	@echo '         \                   /==""            '
	@echo '          \                 /                 '
	@echo '           ""--._______.--""                  '
	@echo '                                              '

norm:
	@norminette ${SRCD} ${INCD} | grep 'Error' ; true

.PHONY:	all clean fclean re coffee norm
