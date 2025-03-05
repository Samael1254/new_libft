/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_queue_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:26:20 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:26:33 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

int	ft_is_queue_empty(t_queue *queue)
{
	if (!queue->front && !queue->back)
		return (1);
	if (queue->front && queue->back)
		return (0);
	return (-1);
}
