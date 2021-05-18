/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 19:11:43 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/17 12:09:50 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(char const *str, char ch)
{
	int		i;
	size_t	p;

	i = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			p += 1;
		i++;
	}
	return (p);
}

static char	**allocate(char const *s, char c)
{
	char	**a;
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	a = (char **)malloc(ft_strlen((char *)s) + count(s, c) + sizeof(void *));
	while (i < (count(s, c) + 1))
	{
		j = 0;
		while (s[k] != '\0' && s[k] != c)
		{
			k++;
			j++;
		}
		a[i] = (char *)malloc(j + 1);
		k++;
		i++;
	}
	a[i] = (char *)malloc(sizeof(void *));
	if (!(a))
		return (NULL);
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	arr = allocate(s, c);
	if (!arr)
		return (NULL);
	while (i < (count(s, c) + 1))
	{
		j = 0;
		while (s[k] != '\0' && s[k] != c)
		{
			arr[i][j] = s[k];
			k++;
			j++;
		}
		arr[i][j] = '\0';
		k++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
