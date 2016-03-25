/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 11:20:30 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 14:24:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_resolve_back(t_stck **stck)
{
	int		limit;
	t_stck	*cpy;

	limit = ft_count_moves(*stck);
	if (limit < 7)
	{
		cpy = ft_stck_copy(*stck);
		cpy->a = cpy->init;
		ft_moves_del(&cpy->moves);
		cpy->lst_move = NULL;
		if (limit > ft_backtrack(&cpy, limit))
		{
			ft_stck_del(stck);
			*stck = cpy;
		}
	}
}
