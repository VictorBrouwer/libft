/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:24:22 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/15 11:22:13 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const size_t	srclen = ft_strlen(src);
	size_t			i;

	i = 0;
	while (src[i] && i < (dstsize - 1) && dstsize != 0)
	{
			dst[i] = src[i];
			i++;
	}
	if (dstsize)
		dst[i] = 0;
	return (srclen);
}
