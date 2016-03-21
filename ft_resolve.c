/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 15:44:47 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 14:04:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_resolve(t_stck *stck)
{
	int	i;

	i = 0;
	while (i < stck->size - 2)
	{
		i = i + ft_range_finder(stck, i);
		if (stck->debug)
		{
			ft_putchar('\n');
			ft_print_stack_a(stck);
		}
	}
	if (stck->a_size > 1 &&
			((t_ntry*)stck->a->content)->goal ==
			((t_ntry*)stck->a->next->content)->goal + 1)
		sa(stck);
	ft_push_b_to_a(stck);
}
