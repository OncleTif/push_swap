/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 14:36:22 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:44:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rs(t_stck *stck)
{
	stck->a = ft_lstrotate(stck->a);
	stck->b = ft_lstrotate(stck->b);
	stck->moves = ft_newmove(stck->moves, "rs");
}
