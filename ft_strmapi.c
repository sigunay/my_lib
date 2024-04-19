/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:32:32 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/17 13:23:55 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*n_str;
	unsigned int		i;

	i = 0;
	n_str = ft_strdup(s);
	if (!n_str)
		return (0);
	while (s[i])
	{
		n_str[i] = f(i, s[i]);
		i++;
	}
	return (n_str);
}
