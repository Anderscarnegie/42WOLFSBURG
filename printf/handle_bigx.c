/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_bigx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:54:36 by ioleinik          #+#    #+#             */
/*   Updated: 2021/06/02 10:21:34 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	zero_fill(unsigned int num, t_data table)
{
	while (table->width && table->width > (table->output))
	{
		table->c = '0';
		table->count += write(1, &(table->c), 1);
		(table->width)--;
	}
	ft_putnbr_base(num, HEXUPP, table);
}

void	handle_bigx(t_data table)
{
	unsigned int	num;
	unsigned int	x;

	num = va_arg(table->ap, unsigned int);
	x = num;
	if (num == 0)
		(table->output)++;
	while (x != 0)
	{
		x /= 16;
		(table->output)++;
	}
	if (table->period && !(table->precision) && num == 0)
		table->output = 0;
	if (table->zero && !((table->precision) > 0) && !(table->dash))
		zero_fill(num, table);
	else
		handle_spec_bigx(num, table);
	(table->i)++;
	reset_table(table);
}
