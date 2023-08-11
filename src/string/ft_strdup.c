/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:07:14 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/11 14:13:09 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	int		x;
	char	*res;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	res = malloc((s1_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	x = 0;
	while (x < s1_len)
	{
		res[x] = s1[x];
		x++;
	}
	res[x] = '\0';
	return (res);
}
