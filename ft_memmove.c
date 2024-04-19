/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:38:39 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/06 12:45:55 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstch;
	unsigned char	*srcch;

	if (dst == src || !len)
		return (dst);
	else if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		i = len;
		dstch = (unsigned char *) dst;
		srcch = (unsigned char *) src;
		while (i > 0)
		{
			dstch[i - 1] = srcch[i - 1];
			i--;
		}
	}
	return (dst);
}
