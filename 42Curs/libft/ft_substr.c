/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 09:11:59 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/20 07:34:40 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	k;

	k = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (NULL == sub)
		return (sub);
	while (k < len)
	{
		if (s[start] == '\0')
		{
			free(sub);
			return (NULL);
		}
		sub[k] = s[start];
		start++;
		k++;
	}
	sub[k] = '\0';
	return (sub);
}
