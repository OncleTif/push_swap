/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntry_creator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 12:21:25 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 12:24:16 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_ntry_creator(t_stck *stck)
{
	int		init;
	t_list	*elem;

	init = 0;
	elem = stck->a;
	while (init < stck->a_size)
	{
		((t_ntry*)elem->content)->init = init;
		elem = elem->next;
		init++;
	}
	ft_bubble_solve(stck);
}
