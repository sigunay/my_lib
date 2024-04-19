/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:32:56 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/11 17:31:17 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*n_arr;

	len = ft_strlen(s1);
	if (len <= 0)
		return (ft_strdup(""));
	while (ft_check_set(s1[len - 1], set))
	{
		len--;
	}
	while (ft_check_set(*s1, set) && len != 0)
	{
		len--;
		s1++;
	}
	n_arr = malloc(len + 1);
	if (n_arr == 0)
		return (0);
	ft_memcpy(n_arr, s1, len);
	n_arr[len] = '\0';
	return (n_arr);
}
