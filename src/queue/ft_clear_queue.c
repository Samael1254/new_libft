#include "ft_queue.h"
#include <stdlib.h>

void	ft_clear_queue(t_queue *queue, void (*free_fct)(void *))
{
	ft_list_clear(queue->front, free_fct);
	free(queue);
}
