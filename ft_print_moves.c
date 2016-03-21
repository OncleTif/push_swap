/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:26:01 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:54:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_print_moves(t_move *move)
{
	if (move)
	{
		if (move->next)
		{
			ft_putendl("descend");
			ft_print_moves(move->next);
			ft_putendl("remonte");
			ft_putchar(' ');
		}
		ft_putstr(move->op);
	}
}
