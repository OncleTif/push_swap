/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:26:01 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 12:42:55 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_print_moves(t_move *move)
{
	int	first;

	first = 1;
	while (move)
	{
		if (first)
			first = 0;
		else
			ft_putchar(' ');
		ft_putstr(move->op);
		move = move->next;
	}
	ft_putchar('\n');
}
