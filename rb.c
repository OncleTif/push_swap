/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 14:35:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 17:45:13 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rb(t_stck *stck)
{
	stck->b = ft_lstrotate(stck->b);
	ft_newmove(stck, "rb");
}
