/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:35:45 by ioleinik          #+#    #+#             */
/*   Updated: 2021/06/02 16:32:52 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	zero_fill(unsigned long num, t_data table)
{
	while (table->width && table->width > (table->output))
	{
		table->c = '0';
		table->count += write(1, &(table->c), 1);
		(table->width)--;
	}
	ft_putnbr_base(num, HEXLOW, table);
}

void	handle_p(t_data table)
{
	unsigned long	num;
	unsigned long	x;

	num = (unsigned long)va_arg(table->ap, unsigned long);
	x = num;
	if (0 == num)
		table->output = 3;
	else
		table->output = 2;
	while (x != 0)
	{
		x /= 16;
		(table->output)++;
	}
	if (table->zero && !((table->precision) > 0) && !(table->dash))
		zero_fill(num, table);
	else
		handle_spec_p(num, table);
	(table->i)++;
	reset_table(table);
}
