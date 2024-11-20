/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:33:06 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 10:19:35 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include "get_next_line.h"
#include <unistd.h>

void	update_buf(t_fd_data *fd_log, int fd)
{
	int	j;

	fd_log->bytes_read = read(fd, fd_log->buf, BUFFER_SIZE);
	j = 0;
	while (fd_log->bytes_read + j < BUFFER_SIZE)
		fd_log->buf[fd_log->bytes_read + j++] = '\0';
	fd_log->i = 0;
}

void	get_next_char(char **line, t_fd_data *fd_log, int fd)
{
	if (fd_log->i == BUFFER_SIZE || fd_log->i == fd_log->bytes_read)
		update_buf(fd_log, fd);
	else
		*line = ft_str_addchar(*line, fd_log->buf[fd_log->i++]);
}
