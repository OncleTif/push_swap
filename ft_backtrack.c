/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 17:56:33 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 12:37:40 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	ft_backtrack(t_stck **stck, int limit)
{
	t_stck	*cpy;
	t_stck	*bst;
	int		move;
	int		ret;

	if (!limit || ft_sorted((*stck)->a))
		return (!limit);
	ret = limit;
	bst = ft_stck_copy(*stck);
	rra(bst);
	ret = ft_backtrack(&bst, ret - 1);
	cpy = ft_stck_copy(*stck);
	sa(cpy);
	move = ft_backtrack(&cpy, limit - 1);
	if (move < ret)
		ret = ft_stck_swap(&cpy, &bst, move);
	ft_stck_del(&cpy);
	cpy = ft_stck_copy(*stck);
	sa(cpy);
	move = ft_backtrack(&cpy, ret - 1);
	if (move < ret)
		ret = ft_stck_swap(&cpy, &bst, move);
	ft_stck_del(&cpy);
	ft_stck_del(stck);
	*stck = bst;
	return (ret + 1);
}
