/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:01:56 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/11 23:22:49 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *str, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}
