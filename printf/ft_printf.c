/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:57:21 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/29 09:20:58 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	t_data	table;
	size_t	ret;

	table = malloc(sizeof(struct s_data));
	if (!table)
		return (-1);
	init_table(table);
	va_start(table->ap, format);
	parse((char *)format, table);
	va_end(table->ap);
	ret = table->count;
	free(table);
	return (ret);
}
