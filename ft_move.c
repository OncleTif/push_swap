/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 11:19:05 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 11:19:20 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_move(t_stck *stck, int rge)
{
	int	i;

	i = 0;
	if (rge < 0)
		rge = stck->size + rge;
	if (rge <= stck->size / 2)
	{
		while (i < rge)
		{
			ra(stck);
			ft_putendl("ra de retour");
			i++;
		}
	}
	else
	{
		while (i < stck->size - rge)
		{
			ft_putendl("rra de retour");
			rra(stck);
			i++;
		}
	}
}
