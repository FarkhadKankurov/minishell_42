/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:59:00 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/22 17:59:00 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

int	bt_env(char **argv)
{
	int	i;

	i = 0;
	if (!g_ourenv.env)
	{
		ft_putstr_fd("minishell: env: env is empty\n", 2);
		return (1);
	}
	while (g_ourenv.env[i])
	{
		printf("%s\n", g_ourenv.env[i]);
		i++;
	}
	return (0);
	(void)argv;
}
