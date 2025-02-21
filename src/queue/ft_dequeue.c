#include "ft_list.h"
#include "ft_queue.h"

void	*ft_dequeue(t_queue *queue, void (*free_fct)(void *))
{
	void	*removed_data;
	t_list	*removed_node;

	removed_node = queue->front;
	removed_data = removed_node->data;
	queue->front = removed_node->next;
	ft_delete_elem(removed_node, free_fct);
	return (removed_data);
}
