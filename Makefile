##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##



NAME		=	libasm.so

SRCS		=	src/strcmp.asm		\
			src/strlen.asm		\
			src/strchr.asm		\
			src/memcpy.asm		\
			src/strcspn.asm		\
			src/memset.asm		\
			src/strncmp.asm		\
			src/strcasecmp.asm	\
			src/strstr.asm		\
			src/strpbrk.asm		\
			src/rindex.asm		\
			src/memmove.asm

ASMFLAGS	=	-f elf64

LDFLAGS		=	-shared

ASM		=	nasm

LD		=	ld

RM		=	rm -f

OBJS		=	$(SRCS:.asm=.o)

%.o:		%.asm
		$(ASM) -o $@ $< $(ASMFLAGS)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(LD) $(LDFLAGS) -o $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)
fclean:		clean
		$(RM) $(NAME)

re:		fclean all


.PHONY: all clean fclean re
