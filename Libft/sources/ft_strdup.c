/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:58:54 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:23:34 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	int		c;

	c = 0;
	while (str[c] != '\0')
		c++;
	copy = 0;
	copy = (char *)malloc(c + 1);
	if (!copy)
		return (0);
	c = 0;
	while (str[c] != '\0')
	{
		copy[c] = str[c];
		c++;
	}
	copy[c] = str[c];
	return (copy);
}
