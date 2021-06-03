/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:44:45 by ioleinik          #+#    #+#             */
/*   Updated: 2021/06/03 11:43:52 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	putstr(char *s, t_data table)
{
	int		x;

	x = 0;
	if (table->precision)
	{
		while (s[x] != '\0' && x < table->precision)
		{
			table->count += write(1, &(s[x]), 1);
			x++;
		}
	}
	else
	{
		while (s[x] != '\0')
		{
			table->count += write(1, &(s[x]), 1);
			x++;
		}
	}
}

static void	notdash(char *s, t_data table)
{
	if (!(table->dash))
	{
		if (table->precision < 0)
			table->precision = 0;
		if (table->width > table->precision && table->precision
			&& table->precision < table->output)
			table->output = table->precision;
		while (table->width && table->width > table->output)
		{
			table->c = ' ';
			table->count += write(1, &(table->c), 1);
			(table->width)--;
		}
		putstr(s, table);
	}
}

static void	dash(char *s, t_data table)
{
	if (table->precision < 0)
		table->precision = 0;
	if (table->dash)
	{
		putstr(s, table);
		if (table->width > table->precision && table->precision
			&& table->precision < table->output)
			table->output = table->precision;
		while (table->width && table->width > table->output)
		{
			table->c = ' ';
			table->count += write(1, &(table->c), 1);
			(table->width)--;
		}
	}
}

void	handle_s(t_data table)
{
	char		*s;
	int			x;

	x = 0;
	s = (char *)va_arg(table->ap, char *);
	while (s[x] != '\0')
		x++;
	table->output = x;
	if ((table->period) && !(table->precision))
	{
		while (table->width)
		{
			table->count += write(1, " ", 1);
			(table->width)--;
		}
	}
	else
	{
		notdash(s, table);
		dash(s, table);
	}
	(table->i)++;
}
