/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unoffset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 11:22:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 11:22:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_unoffset(t_stck *stck)
{
	ft_move(stck, ft_offset(stck, ((t_ntry*)stck->a->content)->goal, 0));
}
