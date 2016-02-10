/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_solve.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 10:42:36 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/10 12:19:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_bubble_solve(t_stck *stck)
{
	int	pos;
	int	pos2;

	pos = 0;

	while (pos < stck->a_size)
	{
		pos2 = 0;
		while (pos2 < stck->a_size)
		{
			if (stck->ntry[pos].value > stck->ntry[pos2].value)
				stck->ntry[pos].goal++;
			pos2++;
		}
		pos++;
	}
}
