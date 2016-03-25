/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 12:10:50 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 12:30:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_resolve_a(t_stck *stck)
{
	int	i;

	ft_move(stck, stck->bgin);
	while (!ft_sorted_offset(stck))
	{
		ft_putendl("reinit");
		ft_putnbrendl(ft_sorted_offset(stck));
		ft_print_stack_a(stck);
		i = 0;
		while (!ft_sorted_offset(stck) && i < stck->end - stck->bgin)
		{
			if (((t_ntry*)stck->a->content)->goal >
					((t_ntry*)stck->a->next->content)->goal)
			{
				ft_putendl("add sa");
				sa(stck);
			}
			else
			{
				i++;
				if (i < stck->end - stck->bgin)
				{
					ra(stck);
					ft_putendl("ra");
				}
			}
			ft_putendl("fin de parcours");
			ft_print_moves(stck->moves);
		}
		if (!ft_sorted_offset(stck))
			ft_move(stck, 1 - i);
	}
	ft_print_moves(stck->moves);
	ft_unoffset(stck);
}
