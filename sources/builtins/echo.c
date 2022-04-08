/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:58:54 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/22 17:58:55 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <minishell.h>

int	bt_echo(char **argv)
{
	bool	nl;

	if (!argv || !argv[0])
	{
		ft_putstr_fd("Echo input error\n", 2);
		return (1);
	}
	nl = 0;
	argv++;
	if (argv[0] && !ft_strncmp(argv[0], "-n", 3))
	{
		nl = 1;
		argv++;
	}
	while (*argv)
	{
		ft_putstr_fd(*argv, 1);
		argv++;
		if (*argv)
			ft_putchar_fd(' ', 1);
	}
	if (nl == 0)
		ft_putchar_fd('\n', 1);
	return (0);
}
