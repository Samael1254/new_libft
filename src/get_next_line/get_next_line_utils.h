/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:32:48 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 16:36:22 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_UTILS_H
# define GET_NEXT_LINE_UTILS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_fd_data
{
	char	buf[BUFFER_SIZE];
	int		i;
	int		bytes_read;
}			t_fd_data;

void		update_buf(t_fd_data *fd_log, int fd);
void		get_next_char(char **line, t_fd_data *fd_log, int fd);

#endif
