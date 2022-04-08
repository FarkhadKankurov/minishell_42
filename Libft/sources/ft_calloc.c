/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:58:54 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:09:59 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*buf;
	size_t	count;

	count = 0;
	buf = 0;
	buf = malloc(num * size);
	if (!buf)
		return (0);
	while (count < num * size)
	{
		*((unsigned char *)buf + count) = 0;
		count++;
	}
	return (buf);
}
