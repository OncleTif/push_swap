/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 14:12:10 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 19:01:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_stck	*ft_stck_copy(t_stck *stck)
{
	t_stck	*cpy;

	cpy = NULL;
	if (stck)
	{
		if (!(cpy = (t_stck*)ft_memalloc(sizeof(t_stck))))
			ft_error("allocation of stack copy error");
		ft_memcpy(cpy, stck, sizeof(t_stck));
		cpy->a = ft_lsntry_copy(stck->a);
		cpy->moves = ft_moves_copy(stck->moves);
		cpy->lst_move = ft_find_lst_move(cpy->moves);
		ft_putendl("verif de la copie de moves");
		ft_print_moves(stck->moves);
		ft_print_moves(cpy->moves);
		ft_putnbrendl((int)stck->lst_move);
		ft_putnbrendl((int)cpy->lst_move);
	}
	return (cpy);
}
