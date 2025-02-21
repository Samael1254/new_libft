#include "ft_memory.h"
#include "ft_queue.h"

t_queue	*ft_create_queue(void)
{
	return (ft_calloc(1, sizeof(t_queue)));
}
