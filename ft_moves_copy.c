/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:50:32 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 18:00:01 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_move	*ft_moves_copy(t_move *move)
{
	t_move	*cpy;

	cpy = NULL;
	if (move)
	{
		if (!(cpy = (t_move*)ft_memalloc(sizeof(t_move))))
			ft_error("allocation fail on move copy");
		cpy->op = ft_strdup(move->op);
		cpy->next = ft_moves_copy(move->next);
	}
	return (cpy);
}
