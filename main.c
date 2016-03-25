/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:54:14 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 12:32:09 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	main(int argc, char **argv)
{
	t_stck	*stck;
	int		sort;

	stck = ft_stck_init();
	if (argc > 1)
	{
		while (stck->a_size + 1 < argc)
		{
			ft_lstpush_back(&stck->a, ft_atolst(argv[stck->a_size + 1]));
			stck->a_size++;
		}
		stck->size = stck->a_size;
		ft_ntry_creator(stck);
		stck->init = ft_lsntry_copy(stck->a);
		ft_putnbrendl(ft_sortiness(stck));
		ft_putnbrendl(stck->bgin);
		ft_putnbrendl(stck->end);
		if (ft_sorted_offset(stck))
			ft_unoffset(stck);
		else
		{
			if ((sort = ft_sortiness(stck)) < 2 || (sort == 2 && stck->size == 3 ))
				ft_resolve_a(stck);
			else
				ft_resolve(stck);
			ft_optimize_moves(stck);
			if (ft_count_moves(stck) < 2)
			{
				ft_putendl("av resolve back");
				ft_print_moves(stck->moves);
				ft_resolve_back(&stck);
				ft_putendl("ap resolve back");
			}
		}
		ft_putendl("affichage");
		if (stck->moves)
			ft_print_moves(stck->moves);
	}
	else
		ft_error("not enough arguments");
	return (0);
}
