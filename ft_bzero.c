/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:02:53 by tamori            #+#    #+#             */
/*   Updated: 2024/01/12 00:20:22 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main() {
// 	char test[256];
// 	char test1[256];

// 	bzero(test, sizeof(test));
// 	ft_bzero(test1, sizeof(test1));
// 	assert(test==test1); //check 
// 	return (0);	
// }

/* 
NAME
     bzero -- write zeroes to a byte string

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <strings.h>

     void
     bzero(void *s, size_t n);

DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  If n is
     zero, bzero() does nothing.

SEE ALSO
     memset(3), swab(3)

HISTORY
     A bzero() function appeared in 4.3BSD.  Its prototype existed previously
     in <string.h> before it was moved to <strings.h> for IEEE Std 1003.1-2001
     (``POSIX.1'') compliance.

     bzero() was deprecated in IEEE Std 1003.1-2001 (``POSIX.1'') and removed
     in IEEE Std 1003.1-2008 (``POSIX.1''). */