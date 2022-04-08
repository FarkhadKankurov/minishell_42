/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohakon <ohakon@student.21-school.ru >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:57:39 by ohakon            #+#    #+#             */
/*   Updated: 2022/03/22 17:57:39 by ohakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNALS_H
# define SIGNALS_H

# include <minishell.h>

void	gsignal_ctlc(int sigtype);
void	fsignal_ctlc(int sigtype);
void	heredoc_ctlc(int sigtype);
int		changetermios(bool toggle);
#endif
