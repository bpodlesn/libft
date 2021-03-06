/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpodlesn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:32:52 by bpodlesn          #+#    #+#             */
/*   Updated: 2018/03/06 14:53:33 by bpodlesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atoi1(char *str, int *k)
{
	int	s;
	int	r;

	r = 0;
	s = 1;
	while (str[*k] >= 0 && str[*k] <= 32)
		(*k)++;
	if (str[*k] == '-')
		s = -1;
	if (str[*k] == '+' || str[*k] == '-')
		(*k)++;
	while (str[*k] && str[*k] >= '0' && str[*k] <= '9')
	{
		if (str[*k] == '\0')
			return (s * r);
		r = r * 10 + str[*k] - '0';
		(*k)++;
	}
	return (s * r);
}
