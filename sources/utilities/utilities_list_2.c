/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_list_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:16:30 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/22 18:16:30 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utilities.h>

t_cmds	*find_last(t_cmds *node)
{
	while (node->next != NULL)
		node = node->next;
	return (node);
}

t_cmds	*find_listhead(t_cmds *node)
{
	while (node && node->previous)
		node = node->previous;
	return (node);
}
