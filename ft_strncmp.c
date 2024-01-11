/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:59:57 by tamori            #+#    #+#             */
/*   Updated: 2024/01/12 00:41:58 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n-- > 0)
	{
		u1 = (unsigned char) *s1++;
		u2 = (unsigned char) *s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
	return (0);
}
