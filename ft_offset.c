/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_offset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 17:00:17 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 12:26:22 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_offset(t_stck *stck)
{
	int pos;
t_list	*ls;

pos = 0;
ls = stck->a;
	while (pos < stck->a_size)
	{
		//stck->ntry[pos].offset = stck->ntry[pos].init - stck->ntry[pos].goal;
		pos++;
	}
}
