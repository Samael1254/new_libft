/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:33:06 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/16 14:35:38 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_str_addchar(char *str, char c)
{
	char	*new_str;
	int		i;

	new_str = malloc((ft_strlen(str) + 2) * sizeof(char));
	if (!new_str)
		return (free(str), NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = c;
	new_str[i + 1] = '\0';
	free(str);
	return (new_str);
}

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
