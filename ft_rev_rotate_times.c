/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate_times.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:02:30 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 14:04:49 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_rev_rotate_times(t_stck *stck, int times, int next)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (next < times)
	{
		ret = ft_rev_rotate_times(stck, next, next + 1);
		times = times - next;
	}
	while (i < times)
	{
		rra(stck);
		i++;
	}
	pb(stck);
	if (ret)
		sb(stck);
	return (ret + 1);
}
