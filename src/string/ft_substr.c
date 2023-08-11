/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrouwer <vbrouwer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:45:45 by vbrouwer          #+#    #+#             */
/*   Updated: 2023/08/11 11:36:28 by vbrouwer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	s_len;
	char	*ptr;

	x = 0;
	s_len = ft_strlen(s);
	if ((start + x) > s_len)
		return (ft_strdup(""));
	if (len > s_len)
		len = s_len;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (len > 0 && s[(start + x)] && start < s_len)
	{
		ptr[x] = s[(start + x)];
		x++;
		len--;
	}
	ptr[x] = '\0';
	return (ptr);
}
