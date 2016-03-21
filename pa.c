/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 14:47:01 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:31:57 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	pa(t_stck *stck)
{
	t_list	*to_push;

	if (stck->b)
	{
		to_push = stck->b;
		stck->b = stck->b->next;
		stck->b_size--;
		ft_lstadd(&stck->a, to_push);
		stck->a_size++;
		ft_putstr("pa ");
		stck->moves = ft_newmove(stck->moves, "pa");
	}
}
