/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:41:48 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/17 12:16:43 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t n1, size_t n2)
{
	if (n1 > n2)
		return (n2);
	return (n1);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	nstr_len;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	nstr_len = ft_strlen(s) - start;
	sub_str = malloc((ft_min(nstr_len, len) + 1) * sizeof(char));
	if (!sub_str)
		return (0);
	i = 0;
	while (i < len && s[i + start])
	{
		sub_str[i] = s[i + start];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
