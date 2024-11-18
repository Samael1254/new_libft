/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:32:37 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/16 14:34:58 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static t_fd_data	fd_logs[1027];
	char				*line;

	if (fd_logs[fd].buf[0] == '\0')
		update_buf(&fd_logs[fd], fd);
	if (fd_logs[fd].bytes_read == -1)
		return (NULL);
	line = malloc(sizeof(char));
	if (!line)
		return (NULL);
	line[0] = '\0';
	while (fd_logs[fd].bytes_read > 0 && fd_logs[fd].buf[fd_logs[fd].i] != '\n')
	{
		get_next_char(&line, &fd_logs[fd], fd);
		if (!line)
			return (NULL);
		if (fd_logs[fd].bytes_read == -1)
			return (free(line), NULL);
	}
	if (fd_logs[fd].bytes_read > 0 && fd_logs[fd].buf[fd_logs[fd].i] == '\n')
		get_next_char(&line, &fd_logs[fd], fd);
	if ((fd_logs[fd].bytes_read == 0 && line[0] == '\0')
		|| fd_logs[fd].bytes_read == -1)
		return (free(line), NULL);
	return (line);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char	file1[100] = "test1.txt";
// 	char	file2[100] = "test2.txt";
// 	int		fd1;
// 	int		fd2;
// 	int		i;
//
// 	fd1 = open(file1, O_RDONLY);
// 	fd2 = open(file2, O_RDONLY);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("line (fd = %d) : %s", fd1, get_next_line(fd1));
// 		printf("line (fd = %d) : %s", fd2, get_next_line(fd2));
// 		printf("line (fd = %d) : %s", 0, get_next_line(0));
// 		i++;
// 	}
// 	close(fd1);
// 	close(fd2);
// }
