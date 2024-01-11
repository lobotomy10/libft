/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:21:44 by tamori            #+#    #+#             */
/*   Updated: 2024/01/12 00:33:09 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

long int	split_function(int n, char *string,
	long int number)
{
	if (n < 0)
	{
		string[0] = '-';
		number = -number;
	}
	else
		number = n;
	return (number);
}

char	*ft_itoa(int n)
{
	char			*string;
	long int		number;
	unsigned int	length;

	number = n;
	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	number = split_function(n, string, number);
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (string);
}
