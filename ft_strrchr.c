/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:32:50 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/01 16:47:32 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*lastpos;
	int		i;

	lastpos = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			lastpos = (char *)&s[i];
		i++;
	}
	if ((char) c == 0)
		return ((char *)&s[i]);
	return (lastpos);
}
