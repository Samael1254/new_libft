#include "ft_queue.h"

int	ft_is_queue_empty(t_queue *queue)
{
	if (!queue->front && !queue->back)
		return (1);
	if (queue->front && queue->back)
		return (0);
	return (-1);
}
