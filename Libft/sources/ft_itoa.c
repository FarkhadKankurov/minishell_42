/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:58:54 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:15:41 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_handlezero(void)
{
	char	*ret;

	ret = (char *)malloc(2);
	if (!ret)
		return (0);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	int		length;
	long	num;
	char	*yeet;

	if (n == 0)
		return (ft_handlezero());
	length = 1;
	num = n / 10;
	while (num != 0 && length++)
		num /= 10;
	if (n < 0)
		length++;
	yeet = (char *)malloc(length + 1);
	if (!yeet)
		return (0);
	if (n < 0)
		yeet[0] = '-';
	yeet[length] = '\0';
	while (n != 0)
	{
		yeet[--length] = (int) ft_llabs(n % 10) + '0';
		n /= 10;
	}
	return (yeet);
}
