/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_spec_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:29:32 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/31 09:23:43 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	dashprecision(unsigned int num, t_data table)
{
	while (table->precision && table->precision > table->output)
	{
		table->c = '0';
		table->count += write(1, &(table->c), 1);
		(table->output)++;
	}
	ft_putnbr_base(num, DEC, table);
	while (table->width && table->width > (table->output))
	{
		table->c = ' ';
		table->count += write(1, &(table->c), 1);
		(table->width)--;
	}
}

static void	dashnotprecision(unsigned int num, t_data table)
{
	ft_putnbr_base(num, DEC, table);
	while (table->width && table->width > table->output)
	{
		table->c = ' ';
		table->count += write(1, &(table->c), 1);
		(table->width)--;
	}
}

static void	notdashprecision(unsigned int num, t_data table)
{
	if (table->precision > table->output)
		(table->width) -= table->output;
	if (table->precision < table->width)
	{
		while (table->width && table->width > (table->output))
		{
			table->c = ' ';
			table->count += write(1, &(table->c), 1);
			(table->width)--;
		}
	}
	while (table->precision && table->precision > table->output)
	{
		table->c = '0';
		table->count += write(1, &(table->c), 1);
		(table->precision)--;
	}
	ft_putnbr_base(num, DEC, table);
}

static void	notdashnotprecision(unsigned int num, t_data table)
{
	while (table->width && table->width > table->output)
	{
		table->c = ' ';
		table->count += write(1, &(table->c), 1);
		(table->width)--;
	}
	ft_putnbr_base(num, DEC, table);
}

void	handle_spec_u(unsigned int num, t_data table)
{
	if (table->dash && table->precision)
		dashprecision(num, table);
	if (table->dash && !(table->precision))
		dashnotprecision(num, table);
	if (!(table->dash) && table->precision)
		notdashprecision(num, table);
	if (!(table->dash) && !(table->precision))
		notdashnotprecision(num, table);
}
