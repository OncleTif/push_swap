/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 15:53:40 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 18:25:37 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_stck	*ft_stck_init(void)
{
	t_stck	*stck;

	if (!(stck = (t_stck*)ft_memalloc(sizeof(t_stck))))
		ft_error("stack allocation error");
	stck->a = NULL;
	stck->b = NULL;
	stck->a_size = 0;
	stck->size = 0;
	stck->b_size = 0;
	stck->debug = 0;
	stck->print = &ft_print_first;
	stck->moves = NULL;
	stck->lst_move = NULL;
	return (stck);
}
