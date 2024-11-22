#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

	fd = open("prout.txt", O_RDWR);
	ft_dprintf(fd, "%-f\n", 42.5);
	dprintf(fd, "%-f\n", 42.5);
	close(fd);
}
