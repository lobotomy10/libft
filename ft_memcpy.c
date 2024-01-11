/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:43:24 by tamori            #+#    #+#             */
/*   Updated: 2024/01/11 21:03:58 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(){
// 	// char src[50] = "This is a source string";
// 	char *src = NULL;
// 	char dest[50] = "This is a source string";
// 	// char *dest = NULL;
// 	memcpy(dest, src, 3);
// 	printf("Copied string: %s\n", dest);
// 	// ft_memcpy(dest, src, strlen(src)+1);
// 	ft_memcpy(dest, src, 3);
// 	printf("Copied string: %s\n", dest);
// 	return (0);
// }