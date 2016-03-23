/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 12:10:50 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 15:24:20 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_resolve_a(t_stck **stck)
{
	int		limit;
	t_stck	*cpy;

	limit = ft_count_moves(*stck);
	if (limit < 20)
	{
		cpy = ft_stck_copy(*stck);
		cpy->a = cpy->init;
		ft_moves_del(&(*stck)->moves);
		(*stck)->lst_move = NULL;
		if (limit > ft_backtrack(cpy, limit))
		{
			ft_stck_del(stck);
			*stck = cpy;
		}
	}
}
