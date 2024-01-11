/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:27:05 by tamori            #+#    #+#             */
/*   Updated: 2024/01/09 22:32:41 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len > 0)
	{
		ptr[len - 1] = c;
		len--;
	}
	return (b);
}

// int main(){ 
// 	char str[] = "Hello World";
// 	printf("%s\n", str);
// 	memset(str, '-',1);
// 	printf("%s\n",str);
// 	ft_memset(str, '-',2);
// 	printf("%s\n",str);
// }

/* 
DESCRIPTION
     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.

SEE ALSO
     bzero(3), memset_pattern(3), memset_s.3, swab(3), wmemset(3)

STANDARDS
     The memset() function conforms to ISO/IEC 9899:1990 (``ISO C90''). */
