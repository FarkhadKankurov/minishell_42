/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:01:17 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/22 18:01:17 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

int	bt_pwd(char **argv)
{
	char	str[4096];

	if (!getcwd(str, 4096))
	{
		perror("minishell");
		return (1);
	}
	printf("%s\n", str);
	return (0);
	(void)argv;
}
