/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize_moves.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 10:35:06 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 11:06:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_optimize_moves(t_stck *stck)
{
	int		opt;

	opt = -1;
	if (stck->moves)
	{
		while (opt)
		{
			opt = ft_pa_pb_reduce(stck);
		}
	}
}
