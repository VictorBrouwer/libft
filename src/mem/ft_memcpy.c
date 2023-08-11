/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:54:04 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/11 11:36:28 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*char_dest;
	char	*char_src;

	char_dest = (char *) dest;
	char_src = (char *) src;
	x = 0;
	if (!dest && !src)
		return (NULL);
	while (x < n)
	{
		char_dest[x] = char_src[x];
		x++;
	}
	return (dest);
}

// int	main(void)
// {
// 	memcpy(NULL, NULL, 3);
// 	ft_memcpy("            ", ((void *)0), 17);

// 	printf("lib: %s", a);
// 	char	test[] = "helloooo";
// 	char	test2[] = "martin";
// 	ft_memcpy(test, test2, 6);
// 	printf("\nown: %s", test);
// 	return (0);
// }