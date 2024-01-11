/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:17:34 by tamori            #+#    #+#             */
/*   Updated: 2024/01/12 00:25:08 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	split_fun_while(char const *s
	, unsigned int start, size_t len, char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	copy_len;
	size_t	j;

	copy_len = 0;
	if (s == 0)
		return (NULL);
	while (copy_len < len && s[copy_len + start] != '\0')
		copy_len++;
	str = (char *)malloc(sizeof(char) * (copy_len + 1));
	if (str == 0)
		return (NULL);
	j = split_fun_while(s, start, len, str);
	str[j] = 0;
	return (str);
}
