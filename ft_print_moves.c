/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:26:01 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 18:41:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_print_moves(t_move *move)
{
	int	first;

	first = 1;
	if (!move)
		ft_putstr("pas de move");
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
