/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:32:44 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/01 15:32:46 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0
			&& i + ft_strlen(needle) <= len)
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
