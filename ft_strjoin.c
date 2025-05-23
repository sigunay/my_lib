/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:32:08 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/08 14:37:54 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*new_arr;

	i = 0;
	s1_len = ft_strlen((char *) s1);
	s2_len = ft_strlen((char *) s2);
	new_arr = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (new_arr == 0)
		return (0);
	while (i < s1_len)
	{
		new_arr[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		new_arr[i] = s2[i - s1_len];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
