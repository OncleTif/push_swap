/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:47:08 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:45:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rrb(t_stck *stck)
{
	stck->b = ft_lstrrotate(stck->b);
	ft_newmove(stck, "rrb");
}
