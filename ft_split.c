/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:35:49 by sigunay           #+#    #+#             */
/*   Updated: 2023/11/11 17:39:26 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *s, char c)
{
	int	i;
	int	fl;
	int	count;

	i = 0;
	fl = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			fl = 1;
		else if (fl == 1 && s[i] != c)
		{
			count++;
			fl = 0;
		}
		i++;
	}
	return (count);
}

static int	ft_wordlen(char *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}

static char	**free_all(char **sp)
{
	int	i;

	i = 0;
	while (sp[i])
	{
		free(sp[i]);
		i++;
	}
	free(sp);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		word_count;
	int		i;

	i = -1;
	word_count = ft_wordcount((char *)s, c);
	split = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			split[++i] = ft_substr(s, 0, ft_wordlen((char *)s, c));
			if (!split[i])
				return (free_all(split));
			s += ft_wordlen((char *)s, c);
		}
	}
	return (split);
}
