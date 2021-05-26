/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 12:13:52 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/13 13:24:05 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	k;
	size_t	s;

	i = 0;
	k = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	while (dest[i] != '\0')
		i++;
	s = s + i;
	if (destsize <= i)
		return (s);
	while (src[k] != '\0' && i + 1 < destsize)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (s);
}
