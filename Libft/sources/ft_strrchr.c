/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:58:54 by hwatercr          #+#    #+#             */
/*   Updated: 2022/03/21 18:24:11 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*found;
	int		count;

	count = 0;
	found = 0;
	while (str[count] != '\0')
	{
		if (str[count] == (char) chr)
			found = (char *)&str[count];
		count++;
	}
	if (str[count] == (char) chr)
		found = (char *)&str[count];
	return (found);
}
