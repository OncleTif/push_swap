/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:30:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/17 14:38:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ft_print_stack_a(t_stck *stck)
{
	int	pos;

	pos = 0;
	while (stck->a)
	{
		ft_putstr("value : ");
		ft_putnbr(((t_ntry*)stck->a->content)->value);
		ft_putstr(" final position : ");
		ft_putnbrendl(((t_ntry*)stck->a->content)->goal);
		//ft_putnbr(stck->ntry[pos].goal);
		//ft_putstr(" offset : ");
		//ft_putnbrendl(stck->ntry[pos].offset);
		stck->a = stck->a->next;
		pos++;
	}
}
