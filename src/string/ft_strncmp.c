/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:25:24 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/11 11:36:28 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	x = 0;
	while ((src1[x] || src2[x]) && x < n)
	{
		if (src1[x] != src2[x])
			return ((unsigned char)src1[x] - (unsigned char)src2[x]);
		x++;
	}
	return (0);
}
