/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:57:45 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/22 17:57:46 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_H
# define UTILITIES_H

# include <minishell.h>

/*
** list functions
*/

int		clear_list(t_cmds *node, int ret);
int		append_list(t_cmds **node);
t_cmds	*delete_node(t_cmds *node);
t_cmds	*find_listhead(t_cmds *node);
t_cmds	*find_last(t_cmds *node);

/*
** list functions
*/

/*
** string functions
*/

int		char_append(char **str, char c);
int		dstring_append(char ***org, char *str);
int		string_append(char **org, char *str);
int		strrlen(char *str);
int		darr_size(char **str);

/*
** string functions
*/

/*
** env suff
*/

char	*get_env_value(char *str);
int		free_env(void);

#endif
