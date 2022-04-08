/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:58:54 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:21:18 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *toadd)
{
	t_list	*lstbuf;

	if (!lst || !toadd)
		return ;
	if (!(*lst))
	{
		*lst = toadd;
		return ;
	}
	lstbuf = *lst;
	while (lstbuf->next)
		lstbuf = lstbuf->next;
	lstbuf->next = toadd;
}
