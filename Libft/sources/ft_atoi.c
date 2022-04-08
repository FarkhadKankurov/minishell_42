/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:28:48 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:01:38 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int		count;
	long	number;
	int		minus;

	number = 0;
	count = 0;
	while (str[count] != '\0' && ft_isspace(str[count]))
		count++;
	minus = 1;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			minus = -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		number += str[count] - '0';
		count++;
		if (str[count] >= '0' && str[count] <= '9')
			number *= 10;
	}
	return (minus * number);
}
