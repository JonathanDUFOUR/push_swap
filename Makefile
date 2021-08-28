# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/28 09:20:23 by jodufour          #+#    #+#              #
#    Updated: 2021/08/26 22:19:44 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CC					=	clang -c -o
LINK				=	clang -o
MKDIR				=	mkdir -p
RM					=	rm -rf

#######################################
#             EXECUTABLES             #
#######################################
NAME				=	push_swap
CHECKER				=	checker

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR				=	srcs/
OBJ_DIR				=	objs/
PS_OBJ_DIR			=	push_swap/
CHK_OBJ_DIR			=	checker/
CMN_OBJ_DIR			=	common/
INC_DIR				=	includes
PRIV_INC_DIR		=	private

FT_IO_DIR			=	libft_io/
FT_IO_INC_DIR		=	includes
FT_IO_INC_DIR		:=	${addprefix ${FT_IO_DIR}, ${FT_IO_INC_DIR}}

FT_STRING_DIR		=	libft_string/
FT_STRING_INC_DIR	=	includes
FT_STRING_INC_DIR	:=	${addprefix ${FT_STRING_DIR}, ${FT_STRING_INC_DIR}}

#######################################
#              LIBRARIES              #
#######################################
FT_IO_A				=	libft_io.a
FT_IO_A				:=	${addprefix ${FT_IO_DIR}, ${FT_IO_A}}

FT_STRING_A			=	libft_string.a
FT_STRING_A			:=	${addprefix ${FT_STRING_DIR}, ${FT_STRING_A}}

######################################
#            SOURCE FILES            #
######################################

PS_SRC				=	\
						${addprefix optimus/,			\
							${addprefix find_cancel/,	\
								find_cancel_pa.c		\
								find_cancel_pb.c		\
								find_cancel_ra.c		\
								find_cancel_rb.c		\
								find_cancel_rr.c		\
								find_cancel_rra.c		\
								find_cancel_rrb.c		\
								find_cancel_rrr.c		\
								find_cancel_sa.c		\
								find_cancel_sb.c		\
								find_cancel_ss.c		\
							}							\
							ps_ans_del_two.c			\
							ps_ans_merge_two.c			\
							ps_ans_optimus.c			\
							ps_are_deletable.c			\
							ps_are_mergeable.c			\
						}								\
						main.c							\
						ps_quick_sort.c

CHK_SRC				=	\
						main.c							\
						ps_answer_apply.c

CMN_SRC				=	\
						${addprefix ans/,				\
							ans_lst.c					\
							ps_ans_add_back.c			\
							ps_ans_del_one.c			\
							ps_ans_free.c				\
							ps_ans_init.c				\
							ps_ans_print.c				\
						}								\
						${addprefix do_op/,				\
							do_pa.c						\
							do_pb.c						\
							do_ra.c						\
							do_rb.c						\
							do_rr.c						\
							do_rra.c					\
							do_rrb.c					\
							do_rrr.c					\
							do_sa.c						\
							do_sb.c						\
							do_ss.c						\
						}								\
						${addprefix lst/,				\
							${addprefix sort_small/,	\
								ps_lst_sort_three.c		\
								ps_lst_sort_two.c		\
								ps_psort_a_large.c		\
								ps_psort_b_large.c		\
								ps_rsort_a_large.c		\
								ps_rsort_b_large.c		\
								ps_sort_large.c			\
							}							\
							a_lst.c						\
							b_lst.c						\
							ps_lst_add_back.c			\
							ps_lst_free.c				\
							ps_lst_get_max.c			\
							ps_lst_get_med.c			\
							ps_lst_get_min.c			\
							ps_lst_init.c				\
							ps_lst_is_in.c				\
							ps_lst_is_sort_rev.c		\
							ps_lst_is_sort.c			\
							ps_lst_push_back.c			\
							ps_lst_push_front.c			\
							ps_lst_set_all.c			\
						}								\
						${addprefix parser/,			\
							ps_check_args.c				\
							ps_check_format.c			\
							ps_check_value.c			\
							ps_get_arg.c				\
							ps_issign.c					\
							ps_valcmp.c					\
						}								\
						ps_err_msg.c					\

######################################
#            OBJECT FILES            #
######################################
PS_OBJ				=	${PS_SRC:.c=.o}
PS_OBJ				:=	${addprefix ${PS_OBJ_DIR}, ${PS_OBJ}}
PS_OBJ				:=	${addprefix ${OBJ_DIR}, ${PS_OBJ}}

CHK_OBJ				=	${CHK_SRC:.c=.o}
CHK_OBJ				:=	${addprefix ${CHK_OBJ_DIR}, ${CHK_OBJ}}
CHK_OBJ				:=	${addprefix ${OBJ_DIR}, ${CHK_OBJ}}

CMN_OBJ				=	${CMN_SRC:.c=.o}
CMN_OBJ				:=	${addprefix ${CMN_OBJ_DIR}, ${CMN_OBJ}}
CMN_OBJ				:=	${addprefix ${OBJ_DIR}, ${CMN_OBJ}}

DEPS				=	${PS_OBJ:.o=.d}
DEPS				+=	${CHK_OBJ:.o=.d}
DEPS				+=	${CMN_OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS				=	-Wall -Wextra -Werror
CFLAGS				+=	-MMD -MP
CFLAGS				+=	-I${INC_DIR}
CFLAGS				+=	-I${PRIV_INC_DIR}
CFLAGS				+=	-I${FT_IO_INC_DIR}
CFLAGS				+=	-I${FT_STRING_INC_DIR}

LDFLAGS				=	-L${FT_IO_DIR} -lft_io
LDFLAGS				+=	-L${FT_STRING_DIR} -lft_string

ifeq (${DEBUG}, true)
	CFLAGS	+=	-g
endif

#######################################
#                RULES                #
#######################################
${NAME}:	${PS_OBJ} ${CMN_OBJ} ${FT_IO_A} ${FT_STRING_A}
	${LINK} $@ ${PS_OBJ} ${CMN_OBJ} ${LDFLAGS}

${CHECKER}:	${CHK_OBJ} ${CMN_OBJ} ${FT_IO_A} ${FT_STRING_A}
	${LINK} $@ ${CHK_OBJ} ${CMN_OBJ} ${LDFLAGS}

all:	${NAME} ${CHECKER}

-include ${DEPS}

${OBJ_DIR}%.o:	${SRC_DIR}%.c
	@${MKDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

${FT_IO_A}:
	@${MAKE} ${@F} -C ${@D}

${FT_STRING_A}:
	@${MAKE} ${@F} -C ${@D}

clean:
	${RM} ${OBJ_DIR}

fclean:
	${RM} ${OBJ_DIR} ${NAME} ${CHECKER}
	@${MAKE} $@ -C ${FT_IO_DIR}
	@${MAKE} $@ -C ${FT_STRING_DIR}


re:	fclean all

coffee:
	@echo '                                              '
	@echo '                   "   "                      '
	@echo '                  " " " "                     '
	@echo '                 " " " "                      '
	@echo '         _.-==="-"""""-"===-._                '
	@echo '        |=___   "~"~"~"   ___=|=,.            '
	@echo '        |    """======="""    |  \\           '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |  //           '
	@echo '         \                   /=="`            '
	@echo '          \                 /                 '
	@echo '           `"--._______.--"`                  '
	@echo '                                              '

norm:
	@norminette ${SRC_DIR} ${INC_DIR} ${PRIV_INC_DIR} | grep 'Error' ; true
	@${MAKE} $@ -C ${FT_IO_DIR}
	@${MAKE} $@ -C ${FT_STRING_DIR}

.PHONY:	all clean fclean re coffee norm
