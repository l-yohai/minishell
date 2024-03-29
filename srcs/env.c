/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jujeong <jujeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 18:39:19 by yohlee            #+#    #+#             */
/*   Updated: 2020/07/19 22:01:22 by jujeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_env(t_arg *a)
{
	int		i;

	i = 0;
	while (a->envp[i])
	{
		write(a->fd, a->envp[i], ft_strlen(a->envp[i]));
		write(a->fd, "\n", 1);
		i++;
	}
	return (0);
}
