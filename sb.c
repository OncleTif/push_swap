/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 13:53:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:33:50 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	sb(t_stck *stck)
{
	stck->b = ft_lstswap(stck->b);
	ft_putstr("sb ");
	stck->moves = ft_newmove(stck->moves, "sb");
}
