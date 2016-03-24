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

int	ft_offset(t_stck *stck, int goal, int pos)
{
	int	offset;

	if ((offset = pos - goal) < 0)
		return (offset + stck->size);
	return (offset);
}
