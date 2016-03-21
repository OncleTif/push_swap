/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_times.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 14:58:37 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 14:02:55 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int		ft_rotate_times(t_stck *stck, int times, int next)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (next < times)
	{
		ret = ft_rotate_times(stck, next, next + 1);
		times = times - next - 1;
	}
	while (i < times - 1)
	{
		ra(stck);
		i++;
	}
	if (((t_ntry*)stck->a->content)->goal ==
			((t_ntry*)stck->a->next->content)->goal + 1)
		sa(stck);
	else if (times)
		ra(stck);
	pb(stck);
	if (ret)
		rb(stck);
	return (ret + 1);
}
