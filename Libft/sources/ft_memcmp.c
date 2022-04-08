/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:58:54 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:22:41 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			count;
	unsigned char	*ptr1_buffer;
	unsigned char	*ptr2_buffer;

	ptr1_buffer = (unsigned char *)ptr1;
	ptr2_buffer = (unsigned char *)ptr2;
	count = 0;
	while (count < n)
	{
		if (*(ptr1_buffer + count)
			!= *(ptr2_buffer + count))
			return (*(ptr1_buffer + count) - *(ptr2_buffer + count));
		count++;
	}
	return (0);
}
