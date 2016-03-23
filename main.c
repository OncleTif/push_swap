/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:54:14 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/23 18:33:31 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	main(int argc, char **argv)
{
	t_stck	*stck;

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
		ft_resolve(stck);
		ft_putendl("av resolve a");
			ft_print_moves(stck->moves);
		ft_resolve_a(&stck);
		ft_putendl("ap resolve a");
//		ft_optimize_moves(stck);
		if (stck->moves)
			ft_print_moves(stck->moves);
	}
	else
		ft_error("not enough arguments");
	return (0);
}
