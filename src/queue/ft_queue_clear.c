/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:26:36 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:26:36 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"
#include <stdlib.h>

void	ft_queue_clear(t_queue *queue, void (*free_fct)(void *))
{
	ft_list_clear(queue->front, free_fct);
	free(queue);
}
