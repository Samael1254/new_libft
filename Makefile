NAME = lib/libft.a

SOURCES_DIR = srcs/

HEADERS_DIR = includes/

BUILD_DIR = build/

SRCS_CHARS := ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isincharset.c \
			  ft_isprint.c ft_isspace.c ft_tolower.c ft_toupper.c

SRCS_CONVERSION := ft_atoi_base.c ft_atoi.c ft_check_base_errors.c ft_convert_base.c ft_itoa_base.c \
				   ft_itoa.c

SRCS_GET_NEXT_LINE := get_next_line.c get_next_line_utils.c

SRCS_LIST := ft_create_elem.c ft_delete_elem.c ft_int_array_to_list.c ft_list_at.c ft_list_clear.c \
			  ft_list_clear_from.c ft_list_clone.c ft_list_cpy.c ft_list_delete_at.c ft_list_find.c \
			  ft_list_foreach.c ft_list_foreach_if.c ft_list_is_sorted.c ft_list_last.c ft_list_map.c \
			  ft_list_merge.c ft_list_push_back.c ft_list_push_front.c ft_list_remove_if.c ft_list_reverse.c \
			  ft_list_size.c ft_list_sort.c ft_list_to_int_array.c ft_list_to_str_array.c ft_sorted_list_insert.c \
			  ft_sorted_list_merge.c ft_str_array_to_list.c ft_swap_elem.c ft_print_int_list.c ft_print_str_list.c

SRCS_MATH := extremums.c ft_abs.c ft_factorial.c ft_fibonnaci.c ft_find_next_prime.c \
			 ft_isprime.c ft_power.c ft_range.c ft_sqrt.c get_nblen_base.c

SRCS_MEMORY := ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			   ft_memmove.c ft_memset.c

SRCS_SORTS := bubble_sort_int.c merge_sort_int.c selection_sort.c swap_int.c

SRCS_STRINGS := ft_split.c ft_str_addchar.c ft_strcat.c ft_strchr.c ft_strcmp.c \
				ft_strcpy.c ft_strdup.c ft_str_is_number.c ft_striteri.c ft_strjoin.c \
				ft_strjoin_tab.c ft_strlen.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
				ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strtrim.c \
				ft_substr.c get_char_index.c

SOURCES := $(addprefix $(SOURCES_DIR)chars/, $(SRCS_CHARS)) $(addprefix $(SOURCES_DIR)conversion/, $(SRCS_CONVERSION)) \
		   $(addprefix $(SOURCES_DIR)get_next_line/, $(SRCS_GET_NEXT_LINE)) $(addprefix $(SOURCES_DIR)lists/, $(SRCS_LIST)) \
		   $(addprefix $(SOURCES_DIR)math/, $(SRCS_MATH)) $(addprefix $(SOURCES_DIR)memory/, $(SRCS_MEMORY)) \
		   $(addprefix $(SOURCES_DIR)sorts/, $(SRCS_SORTS)) $(addprefix $(SOURCES_DIR)strings/, $(SRCS_STRINGS))

OBJECTS = $(addprefix $(BUILD_DIR), $(notdir $(SOURCES:.c=.o)))

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(HEADERS_DIR)

$(NAME): $(OBJECTS)
	@ echo " - object files compiled in build/"
	@ ar crs $@ $^
	@ echo " - libft.a compiled in lib/"

$(BUILD_DIR)%.o: $(SOURCES_DIR)*/%.c
	@ echo " ... compiling $(notdir $@)"
	@ tput cuu1 && tput el
	@ $(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@ rm -f $(OBJECTS)
	@ rm -f $(BUILD_DIR)*.?1
	@ rm -f $(BUILD_DIR)*.txt
	@ echo " - object files cleaned"

fclean: clean
	@ rm -f $(NAME)
	@ echo " - libft.a cleaned"

re: fclean all

.PHONY : clean fclean re all
