/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:24:34 by tamori            #+#    #+#             */
/*   Updated: 2024/01/09 22:31:59 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char x)
{
	if (('A' < x && x < 'Z') || ('a' < x && x < 'z'))
		return (1);
	return (0);
}

// int main()
// {
// 	char a = 'Q';
// 	char b = 'q';
// 	char c = '!';

// 	printf("%d\n", ft_isalpha(a));
// 	printf("%d\n", ft_isalpha(b));
// 	printf("%d\n", ft_isalpha(c));

// 	return (0);
// }