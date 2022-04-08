/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:16:51 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/22 18:16:51 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*get_env_val(char **env, char *str)
{
	char	*chr;
	int		c;
	int		l;

	l = ft_strlen(str);
	c = 0;
	while (env[c])
	{
		chr = ft_strchr(env[c], '=');
		if (!strncmp(env[c], str, l) && env[c][l] == '=')
		{
			return (chr + 1);
		}
		c++;
	}
	return ("");
}
