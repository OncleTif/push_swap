/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:45:02 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:43:08 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rra(t_stck *stck)
{
	stck->a = ft_lstrrotate(stck->a);
	ft_newmove(stck, "rra");
}
