/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 14:33:17 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:42:59 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ra(t_stck *stck)
{
	stck->a = ft_lstrotate(stck->a);
	ft_newmove(stck, "ra");
}
