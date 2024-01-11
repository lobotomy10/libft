/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:24:34 by tamori            #+#    #+#             */
/*   Updated: 2024/01/11 21:10:22 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	return (('A' <= i && i <= 'Z') || ('a' <= i && i <= 'z'));
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