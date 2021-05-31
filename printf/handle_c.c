/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:29:14 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/31 11:08:20 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	handle_c(t_data table)
{
	table->cha = (char)va_arg(table->ap, int);
	table->output = 1;
	handle_spec_c(table);
	(table->i)++;
	reset_table(table);
}
