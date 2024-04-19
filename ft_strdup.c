/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:31:55 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/01 15:32:04 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_arr;
	size_t	arr_len;
	size_t	i;

	arr_len = ft_strlen(s1);
	new_arr = (char *) malloc((arr_len + 1) * sizeof(char));
	if (new_arr == 0)
		return (0);
	i = 0;
	while (i < arr_len)
	{
		new_arr[i] = s1[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
