#include "ft_list.h"

typedef struct s_queue
{
	t_list	*front;
	t_list	*back;
}			t_queue;

// Creates an empty queue
t_queue		*ft_create_queue(void);
// Adds an element at the back of the queue
int			ft_enqueue(t_queue *queue, void *data);
// Removes the first element of the queue and returns its value
void		*ft_dequeue(t_queue *queue, void (*free_fct)(void *));
// Checks if a queue is empty, and returns -1 if it is invalid
int			ft_is_queue_empty(t_queue *queue);
// Clears a queue and all its data
void		ft_clear_queue(t_queue *queue, void (*free_fct)(void *));
