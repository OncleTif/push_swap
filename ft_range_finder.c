/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 11:06:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 11:07:11 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_range_finder(t_stck *stck, int range)
{
	int		i;
	t_list	*elem;

	elem = stck->a;
	i = 0;
	while (((t_ntry*)elem->content)->goal != range)
	{
		elem = elem->next;
		i++;
	}
	if (i < stck->a_size / 2)
		ft_rotate_times(stck, i);
	else
		ft_rev_rotate_times(stck, stck->a_size - i);
	pb(stck);
}
