NAME = lib/libft.a

SOURCES_DIR = src/

HEADERS_DIR = includes/

BUILD_DIR = build/

SRCS_CHARS := ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isincharset.c \
			  ft_isprint.c ft_isspace.c ft_tolower.c ft_toupper.c ft_get_char_index.c

SRCS_CONVERSION := ft_atoi_base.c ft_atoi.c ft_check_base_errors.c ft_convert_base.c ft_itoa_base.c \
				   ft_itoa.c ft_atod.c

SRCS_GET_NEXT_LINE := get_next_line.c get_next_line_utils.c

SRCS_LIST := ft_create_elem.c ft_delete_elem.c ft_int_array_to_list.c ft_list_at.c ft_list_clear.c \
			  ft_list_clear_from.c ft_list_shallow_cpy.c ft_list_deep_cpy.c ft_list_delete_at.c ft_list_find.c \
			  ft_list_foreach.c ft_list_foreach_if.c ft_list_is_sorted.c ft_list_last.c ft_list_map.c \
			  ft_list_merge.c ft_list_push_back.c ft_list_push_front.c ft_list_remove_if.c ft_list_reverse.c \
			  ft_list_size.c ft_list_sort.c ft_list_to_int_array.c ft_list_to_str_array.c ft_sorted_list_insert.c \
			  ft_sorted_list_merge.c ft_str_array_to_list.c ft_swap_elem.c ft_print_int_list.c ft_print_str_list.c \
			  ft_print_int_list_reverse.c ft_int_list_min.c ft_list_index.c ft_list_find_index.c ft_list_at_end.c \
			  ft_int_list_max.c

SRCS_MATH := extremums.c ft_abs.c ft_factorial.c ft_fibonnaci.c ft_find_next_prime.c \
			 ft_isprime.c ft_power.c ft_range.c ft_sqrt.c get_nblen_base.c \
			 ft_truncate.c ft_round.c ft_get_exponent.c ft_powerf.c extremumsf.c \
			 ft_doublelen.c ft_in_range.c ft_absf.c ft_cmpf.c ft_lerpf.c

SRCS_MEMORY := ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			   ft_memmove.c ft_memset.c

SRCS_SORTS := bubble_sort_int.c merge_sort_int.c selection_sort.c swap_int.c

SRCS_STRINGS := ft_split.c ft_split_charset.c ft_str_addchar.c ft_strcat.c ft_strchr.c ft_strcmp.c \
				ft_strcpy.c ft_strdup.c ft_str_is_number.c ft_striteri.c ft_strjoin.c \
				ft_strjoin_tab.c ft_strlen.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
				ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strtrim.c \
				ft_substr.c get_char_index.c ft_free_strtab.c ft_count_words.c ft_strndup.c \
				ft_strtok.c ft_strspn.c ft_strcspn.c ft_strtab_size.c ft_strsurround.c \

SRCS_PRINTF := ft_printf.c ft_dprintf.c ft_vdprintf.c dprintf_arg_attributes.c dprintf_padding.c dprintf_params.c \
			   dprintf_printarg.c dprintf_modify_len.c dput_misc.c dput_int.c dput_double.c

SRCS_HASHTABLE := hashtable_basics.c hashtable_utils.c hashtable_additional.c hashtable_additional_2.c

SRCS_ALGEBRA := ft_add_matrixes.c ft_add_vectors.c ft_are_vectors_col.c ft_are_vectors_ortho.c ft_print_vector.c\
				ft_convert_matrix.c ft_convert_vector.c ft_cross_vectors.c ft_direction_vector.c ft_distance.c \
				ft_dot_vectors.c ft_get_base_vector.c ft_init_vector.c ft_axonometric_projection.c ft_lerp.c \
				ft_line_equation.c ft_lines_intersection.c ft_matrix_product.c ft_matrix_vector_product.c ft_middle.c \
				ft_normalize_vector.c ft_orthographic_projection.c ft_scale_matrix.c ft_scale_vector.c ft_set_null_matrix.c \
				ft_set_rotation_matrix.c ft_set_scaling_matrix.c ft_set_stretching_matrix.c ft_set_translation_matrix.c ft_print_matrix.c\
				ft_set_vector.c ft_sub_vectors.c ft_vector_norm.c ft_vectors_angle.c ft_convert_angle.c \
				ft_print_matrix.c ft_oblique_projection.c ft_perspective_projection.c ft_rotate_vector.c ft_translate_vector.c \
				ft_plane_projection.c

SRCS_BTREE := ft_bntree_create_node.c ft_bntree_apply_prefix.c ft_bntree_apply_infix.c ft_bntree_apply_suffix.c ft_bntree_insert.c \
			  ft_bntree_search.c ft_bntree_level_count.c ft_bntree_delete_node.c ft_bntree_clear.c

SRCS_QUEUE := ft_create_queue.c ft_queue_clear.c ft_enqueue.c ft_dequeue.c ft_is_queue_empty.c

SRCS_STACK := ft_create_stack.c ft_stack_clear.c ft_stack_push.c ft_stack_pop.c

SOURCES := $(addprefix $(SOURCES_DIR)chars/, $(SRCS_CHARS)) $(addprefix $(SOURCES_DIR)conversion/, $(SRCS_CONVERSION)) \
		   $(addprefix $(SOURCES_DIR)get_next_line/, $(SRCS_GET_NEXT_LINE)) $(addprefix $(SOURCES_DIR)lists/, $(SRCS_LIST)) \
		   $(addprefix $(SOURCES_DIR)math/, $(SRCS_MATH)) $(addprefix $(SOURCES_DIR)memory/, $(SRCS_MEMORY)) \
		   $(addprefix $(SOURCES_DIR)sorts/, $(SRCS_SORTS)) $(addprefix $(SOURCES_DIR)strings/, $(SRCS_STRINGS)) \
		   $(addprefix $(SOURCES_DIR)printf/, $(SRCS_PRINTF)) $(addprefix $(SOURCES_DIR)hashtable/, $(SRCS_HASHTABLE)) \
		   $(addprefix $(SOURCES_DIR)algebra/, $(SRCS_ALGEBRA)) $(addprefix $(SOURCES_DIR)btree/, $(SRCS_BTREE)) \
		   $(addprefix $(SOURCES_DIR)queue/, $(SRCS_QUEUE)) $(addprefix $(SOURCES_DIR)stack/, $(SRCS_STACK))

OBJECTS = $(addprefix $(BUILD_DIR), $(notdir $(SOURCES:.c=.o)))

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(HEADERS_DIR) -g

$(NAME): compile_msg $(OBJECTS)
	@ tput cuu1 && tput el
	@ echo " \033[32m object files compiled in \033[1mbuild/\033[m"
	@ mkdir -p lib
	@ ar crs $@ $(OBJECTS)
	@ echo " \033[32m \033[1mlibft.a\033[0;32m compiled in \033[1mlib/\033[m"

$(BUILD_DIR)%.o: $(SOURCES_DIR)*/%.c
	@ echo " \033[33m... compiling $(notdir $@)\033[m"
	@ tput cuu1 && tput el
	@ mkdir -p build
	@ $(CC) $(CFLAGS) -c $< -o $@

compile_msg:
	@ echo " \033[33m... building sources\033[m"

all: $(NAME)

clean:
	@ echo " \033[33mCleaning\033[m"
	@ rm -f $(OBJECTS)
	@ rm -df $(BUILD_DIR)
	@ echo " \033[32m object files cleaned\033[m"

fclean: clean
	@ rm -f $(NAME)
	@ rm -df lib
	@ echo " \033[1;32m libft.a\033[0;32m cleaned\033[m"

re: fclean all

.PHONY : clean fclean re all
