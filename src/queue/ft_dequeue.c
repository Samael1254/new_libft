/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dequeue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:26:16 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:26:17 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_queue.h"

void	*ft_dequeue(t_queue *queue, void (*free_fct)(void *))
{
	t_list	*removed_node;
	void	*removed_data;

	removed_node = queue->front;
	removed_data = removed_node->data;
	queue->front = removed_node->next;
	ft_delete_elem(removed_node, free_fct);
	return (removed_data);
}
