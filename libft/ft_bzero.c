/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jujeong <jujeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:57:39 by jujeong           #+#    #+#             */
/*   Updated: 2020/03/04 00:15:20 by jujeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *ptr, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)ptr;
	while (i < len)
		str[i++] = '\0';
}