/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 17:56:33 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 14:17:26 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_backtrack(t_stck **stck, int limit)
{
	t_stck	*cpy;
	t_stck	*bst;
	int		move;

	if (!limit || ft_sorted((*stck)->a))
		return (!limit);
	bst = ft_stck_copy(*stck);
	rra(bst);
	limit = ft_backtrack(&bst, limit - 1);
	cpy = ft_stck_copy(*stck);
	sa(cpy);
	move = ft_backtrack(&cpy, limit - 1);
	if (move < limit)
		limit = ft_stck_swap(&cpy, &bst, move);
	ft_stck_del(&cpy);
	cpy = ft_stck_copy(*stck);
	sa(cpy);
	move = ft_backtrack(&cpy, limit - 1);
	if (move < limit)
		limit = ft_stck_swap(&cpy, &bst, move);
	ft_stck_del(&cpy);
	ft_stck_del(stck);
	*stck = bst;
	return (limit + 1);
}
