/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:30:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/17 16:49:09 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_print_stack_a(t_stck *stck)
{
	int	pos;
	t_list	*elem;

	pos = 0;
	elem = stck->a;
	while (elem)
	{
		ft_putstr("value : ");
		ft_putnbr(((t_ntry*)elem->content)->value);
		ft_putstr(" final position : ");
		ft_putnbrendl(((t_ntry*)elem->content)->goal);
		//ft_putnbr(stck->ntry[pos].goal);
		//ft_putstr(" offset : ");
		//ft_putnbrendl(stck->ntry[pos].offset);
		elem = elem->next;
		pos++;
	}
}
