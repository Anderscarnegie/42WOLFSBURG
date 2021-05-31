/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_perc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:26:02 by ioleinik          #+#    #+#             */
/*   Updated: 2021/05/31 11:43:39 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	handle_perc(t_data table)
{
	table->c = '%';
	table->count += write(1, &(table->c), 1);
	(table->i)++;
	reset_table(table);
}
