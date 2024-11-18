/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:32:48 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/15 17:33:33 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_fd_data
{
	char	buf[BUFFER_SIZE];
	int		i;
	int		bytes_read;
}			t_fd_data;

char		*get_next_line(int fd);

void		update_buf(t_fd_data *fd_log, int fd);
void		get_next_char(char **line, t_fd_data *fd_log, int fd);

#endif
