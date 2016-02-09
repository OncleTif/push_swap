/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 14:52:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/09 14:53:40 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	pb(t_stck *stck)
{
	t_list	*to_push;

	if (stck->a)
	{
		to_push = stck->a;
		stck->a = stck->a->next;
		stck->a_size--;
		ft_lstadd(&stck->b, to_push);
		stck->b_size++;
	}
}
