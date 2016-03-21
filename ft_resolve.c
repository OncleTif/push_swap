/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 15:44:47 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 11:08:26 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_resolve(t_stck *stck)
{
	int	i;

	i = 0;
	while (i < stck->size - 1)
	{
		ft_range_finder(stck, i);
		i++;
		if (stck->debug)
		{
			ft_putchar('\n');
			ft_print_stack_a(stck);
		}
	}
	ft_push_b_to_a(stck);
}
