/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:41:12 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/22 23:37:55 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s[0])
		return (0);
	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static void	get_next(char **next_str, size_t *nex_len, char c)
{
	size_t	i;

	*next_str += *nex_len;
	*nex_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*nex_len)++;
		i++;
	}
}

static char	*set(char c)
{
	static char	s[5];

	s[0] = c;
	s[1] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*string;
	char	*next_str;
	size_t	nex_len;
	size_t	i;

	string = ft_strtrim(s, set(c));
	if (!string)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (count_str(string, c) + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)string;
	nex_len = 0;
	while (i < count_str(string, c))
	{
		get_next(&next_str, &nex_len, c);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (nex_len + 1))))
			return (NULL);
		ft_strlcpy(tab[i], next_str, nex_len + 1);
		i++;
	}
	tab[i] = NULL;
	free(string);
	return (tab);
}
