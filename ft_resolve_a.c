/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 12:10:50 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 18:22:31 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_resolve_a(t_stck *stck)
{
	int		limit;
	t_stck	*cpy;

	cpy = ft_stck_copy(stck);
cpy->a = cpy->init;

	limit = ft_count_moves(stck);
if (limit > ft_backtrack(
}
