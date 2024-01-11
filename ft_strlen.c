/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 00:08:56 by tamori            #+#    #+#             */
/*   Updated: 2024/01/12 00:08:59 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main(){
// 	printf("%lu", ft_strlen("test"));
// 	printf("%lu", strlen("  "));
// 	printf("%lu", strlen("\t"));
// 	printf("%lu", strlen(" "));
// 	return (0);