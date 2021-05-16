/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:15:34 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/16 18:11:52 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	k = ft_strlen((char *)s1) - 1;
	while (s1[k] && ft_strchr(set, s1[k]))
		k--;
	return (ft_substr(s1, i, k - i + 1));
}
