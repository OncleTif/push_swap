/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 17:56:33 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 18:34:10 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_backtrack(t_stck **stck, int limit)
{
	t_stck	*cpy;
	t_stck	*bst;
	int		move;
	int		ret;

	ft_putstr("lvl : ");
	ft_putnbrendl(limit);
	ft_print_moves((*stck)->moves);
	if (!limit)
		return (1);
	if (ft_sorted((*stck)->a))
		return (0);
	bst = ft_stck_copy(*stck);
	sa(bst);
	ret = ft_backtrack(&bst, limit - 1);
	cpy = ft_stck_copy(*stck);
	ra(cpy);
	move = ft_backtrack(&cpy, limit - 1);
	if (move < ret)
		ret = ft_stck_swap(&cpy, &bst, move);
	ft_stck_del(&cpy);
	cpy = ft_stck_copy(*stck);
	rra(cpy);
	move = ft_backtrack(&cpy, limit - 1);
	if (move < ret)
		ret = ft_stck_swap(&cpy, &bst, move);
	ft_stck_del(&cpy);
	ft_stck_del(stck);
	*stck = bst;
	ft_print_moves(bst->moves);
	return (ret + 1);
}
