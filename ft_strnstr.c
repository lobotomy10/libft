/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:05:41 by tamori            #+#    #+#             */
/*   Updated: 2024/01/11 21:51:23 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	size_t	len;

	c = *find++;
	if (c != '\0')
	{
		len = ft_strlen(find);
		while (slen-- >= 1)
		{
			if (*s != '\0')
			{
				if (*s == c)
					if (len <= slen)
						if (ft_strncmp(s + 1, (char *)find, len) == 0)
							return ((char *)s);
				s++;
			}
			else
				return (NULL);
		}
		return (NULL);
	}
	return ((char *)s);
}
