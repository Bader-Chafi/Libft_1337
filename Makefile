# Name of the output library
NAME = libft.a
HEADER = libft.h

# Core source files
SOURCES = \
	ft_isalpha.c ft_itoa.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strlcat.c \
	ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_split.c ft_memset.c ft_strtrim.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Bonus source files
SOURCESB = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Object files for core sources
OBJECTS = $(SOURCES:.c=.o)

# Object files for bonus sources
OBJECTSB = $(SOURCESB:.c=.o)

# Compiler and flags
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror

# Default target: all
all: $(NAME)

# Rule to build the library with core and bonus objects
$(NAME): $(OBJECTS)
	$(AR) -rcs $@ $^

%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $<

# Rule for bonus target, adding bonus objects to the library
bonus: $(NAME) $(OBJECTSB)
	$(AR) -rcs $(NAME) $(OBJECTSB)

# Clean rules
clean:
	rm -f $(OBJECTS) $(OBJECTSB)

fclean: clean
	rm -f $(NAME)

# Rebuild target
re: fclean all
.PHONY: all clean fclean re