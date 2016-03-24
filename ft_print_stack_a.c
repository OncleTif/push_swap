/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:30:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 11:04:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_print_stack_a(t_stck *stck)
{
	int		pos;
	t_list	*elem;

	pos = 0;
	elem = stck->a;
	while (elem)
	{
		ft_putstr("value : ");
		ft_putnbr(((t_ntry*)elem->content)->value);
		ft_putstr(" final position : ");
		ft_putnbr(((t_ntry*)elem->content)->goal);
		ft_putstr(" offset : ");
		ft_putnbrendl(pos - ((t_ntry*)elem->content)->goal);
		elem = elem->next;
		pos++;
	}
}
