/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enqueue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:26:18 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:26:18 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_queue.h"

int	ft_enqueue(t_queue *queue, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!new_node)
		return (1);
	if (!queue->back || !queue->front)
	{
		queue->back = new_node;
		queue->front = new_node;
		return (0);
	}
	queue->back->next = new_node;
	queue->back = new_node;
	return (0);
}
