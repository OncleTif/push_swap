/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_times.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 14:58:37 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 12:29:51 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_rotate_times(t_stck *stck, int times)
{
	int	i;

	i = 0;
	while (i < times - 1)
	{
		ra(stck);
		i++;
	}
//	ft_putnbr(((t_ntry*)stck->a->content)->goal);
//	ft_putnbrendl(((t_ntry*)stck->a->next->content)->goal);
	if (((t_ntry*)stck->a->content)->goal ==
			((t_ntry*)stck->a->next->content)->goal + 1)
		sa(stck);
	else
		ra(stck);
}
