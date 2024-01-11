/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:07:19 by tamori            #+#    #+#             */
/*   Updated: 2024/01/12 00:18:49 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (neg == 1 && res > (LONG_MAX - (str[i] - '0')) / 10)
			return ((int)LONG_MAX);
		if (neg == -1 && - res < (LONG_MIN + (str[i] - '0')) / 10)
			return ((int)LONG_MIN);
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}
