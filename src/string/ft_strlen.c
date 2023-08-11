/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:21:06 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/11 14:13:39 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	if (!c)
		return (0);
	while (c[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*a = "hello";
// 	printf("%lu", strlen(a));
// 	printf("\n%d", ft_strlen(a));
// 	return (0);
// }