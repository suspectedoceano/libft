# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Oceano <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 20:30:16 by Oceano            #+#    #+#              #
#    Updated: 2023/01/31 17:55:23 by Oceano           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	"YOUR MAKEFILE MUST NOT RELINK"
#	When a Makefile is being used to build a software project, 
#	relinking is the process of linking object files together to create an executable.
#	The statement "your Makefile must not relink" means that the Makefile should not 
#	perform the linking step again if the object files have not been modified since 
#	the last time the executable was built. This is an important concept in Makefile 
#	because it can save a lot of time when building large projects.
#	When make runs, it checks the timestamps of the dependencies and only rebuilds
#	the target if the dependencies are newer. If the dependencies of the executable
#	(object files) have not been modified, the executable does not need to be rebuilt.
#	In this way the makefile is efficient and don't need to relink the files that haven't
#	been modified, so the build process will be faster and the software will be ready to use faster.

#Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.

#To turn in bonuses to your project, you must include a rule bonus to your Makefile,
#which will add all the various headers, librairies or functions that are forbidden on
#the main part of the project. Bonuses must be in a different file _bonus.{c/h} if
#the subject does not specify anything else. Mandatory and bonus part evaluation
#is done separately

#VARIBLES 

NAME	=   libft.a
SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c 

SRCS_B	=   ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c

OBJS	= $(SRCS:.c=.o)
OBJS_B	= $(SRCS_B:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

#"all files with the extension .c, build a file with the same name but with the extension .o".
#$< is a special variable in makefiles that refers to the first prerequisite of the rule.
#In this case, the prerequisite is the .c file that the rule is trying to build the .o file from.
#It is not mentioned as prerequisites in the rule itself, but it is implied that the .c file 
#is the prerequisite for the .o file because of the pattern matching with the rule .c.o.
#So when we run make command, make will look for the corresponding .c file to 
#the given .o file, and the $< will be replaced by the name of the .c file.
#.c.o : is an example of an implicit rule in make.
#In make, implicit rules are predefined rules that are used when no explicit rule 
#for a target can be found. They are used to build a target from a source file of a different type.
#This particular rule .c.o : is an implicit rule that tells make how to build a .o file from a .c file, if no explicit rule is provided.
#It is a pattern rule, that specifies how to create the target file (here .o) from the source file(here .c) by matching the pattern.
#IT IS LIKE WRITING
#%.o: %.c
#	${CC} ${FLAGS} -c $< -o $@ -I${INCS}

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS} 
	${LIBC} $(NAME) $(OBJS) 

all: $(NAME)

bonus: $(NAME) $(OBJS_B)
	${LIBC} $(NAME) $(OBJS_B)
    
fclean: clean
	$(RM) $(NAME) $(bonus)

clean:
	$(RM) -f $(OBJS) $(OBJS_B)
    
re: fclean all

.PHONY: all bonus clean fclean re .c.o

#The first line, NAME = libft.a, sets a variable called "NAME" to be the string "libft.a".
#	This variable is used later in the Makefile to specify the 
#	name of the library file that will be created.

#The next line, SRCS = ft_atoi.c \, sets a variable called "SRCS" to be a list of C files 
#that will be used to create the library. 
#The list includes files such as "ft_atoi.c", "ft_bzero.c", and so on.
#Each file is separated by a backslash \ so that the list can continue on the next line.

#The following line SRCS_B.., sets a variable called "SRCS_B" to be a list 
#of C files that will be used to create the bonus version of the library.
#The list includes files such as "ft_lstadd_back.c", "ft_lstadd_front.c", and so on.

#The next line OBJS = $(SRCS:.c=.o), sets a variable called "OBJS" 
#to be the list of object files that will be created from the C file
#listed in the "SRCS" variable. 
#SUBSTITUTION REFERENCE
#	SYNTAX
#		~$(VARIABLE_NAME:OLD_STRING=NEW_STRING)
#The $(SRCS:.c=.o) is a shorthand way of saying
#	~"replace the '.c' extension of the files in the 'SRCS' variable with '.o' ".
#TL;DR
#$(SRCS:.c=.o) is a makefile variable substitution.

#The following line OBJS_B = $(SRCS_B:.c=.o), sets a variable called "OBJS_B"
#to be the list of object files that will be created from the C files listed 
#in the "SRCS_B" variable. 
#The $(SRCS_B:.c=.o) is a shorthand way of saying
#	~"replace the '.c' extension of the files in the 'SRCS_B' variable with '.o' ".

#The next line RM = rm -f, sets a variable called "RM" to the string "rm -f".
#This variable is used later in the Makefile as a shorthand way to delete files. 
#The -f flag is used to ignore nonexistent files and never prompt the user.

#The following line LIBC = ar -rcs, sets a variable called "LIBC" to the string "ar -rcs". 
#This variable is used later in the Makefile as a shorthand way to create the library file.
#The ar command is used to create, modify, and extract from archives.
#TL;DR
#ar rcs library.a file1.o file2.o
#This command creates a new archive library called "library.a" 
#and adds the object files "file1.o" and "file2.o" to it. The options "r", "c", and "s" 
#are usedto insert new files, create a new archive, and write an index, respectively.

#The next line FLAGS = -Wall -Wextra -Werror, sets a variable called "FLAGS"
#to the string "-Wall -Wextra -Werror". 
#These flags are used when compiling the C files into object files. 

#The following line INCS = . sets a variable called "INCS" to the string ".". 
#This variable is used to specify the include path when compiling the C files into object files.
