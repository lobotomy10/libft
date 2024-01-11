/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:46:43 by tamori            #+#    #+#             */
/*   Updated: 2024/01/11 21:05:58 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = 0;
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}

// #include <stdio.h>
// #include <string.h>
// int main(){
// 	char str[50] = "This is the moved String"; 
// 	char dest[50];
// 	memmove(dest, str, 3);
// 	printf("Copied string: %s\n", dest);
// 	ft_memmove(dest, str, 3);
// 	printf("Copied string: %s\n", dest);
// }
