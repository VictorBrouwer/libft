/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:45:45 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/15 11:20:50 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const size_t	slen = ft_strlen(s);
	char			*mem;

	if (start > slen)
	{
		len = 0;
		start = 0;
	}
	else if (len > (slen - start))
		len = slen - start;
	mem = (char *)malloc((len + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, s + start, len + 1);
	return (mem);
}
