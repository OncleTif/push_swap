/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 18:24:26 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 18:11:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_stck_del(t_stck **stck)
{
	if (stck && *stck)
	{
		ft_lstdel(&(*stck)->a, &ft_ntry_del);
		ft_moves_del(&(*stck)->moves);
		ft_memdel((void**)stck);
	}
}
