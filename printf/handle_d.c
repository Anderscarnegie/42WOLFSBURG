/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:39:17 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/31 09:15:17 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	zero_fill(long num, t_data table)
{
	if (num < 0)
	{
		num = -num;
		table->c = '-';
		table->count += write(1, &(table->c), 1);
	}
	while (table->width && table->width > (table->output))
	{
		table->c = '0';
		table->count += write(1, &(table->c), 1);
		(table->width)--;
	}
	ft_putnbr_base(num, DEC, table);
}

void	handle_d(t_data table)
{
	long int	num;
	long int	x;

	num = va_arg(table->ap, int);
	x = num;
	if (x <= 0)
		table->output = 1;
	if (table->period && !(table->precision) && num == 0)
		table->output = 0;
	while (x != 0)
	{
		x /= 10;
		(table->output)++;
	}
	if (table->zero)
		zero_fill(num, table);
	else
		handle_spec(num, table);
	(table->i)++;
	reset_table(table);
}
