/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <tamori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:02:03 by tamori            #+#    #+#             */
/*   Updated: 2024/01/09 22:32:04 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a){
	if (0 <= a && a <= 127)
		return (1);
	return (0);
}

// int main(){
// 	printf("%d", ft_isascii(-1));
// 	printf("%d", ft_isascii(0));
// 	printf("%d", ft_isascii(1));
// 	printf("%d", ft_isascii(126));
// 	printf("%d", ft_isascii(127));
// 	printf("%d", ft_isascii(128));
// }