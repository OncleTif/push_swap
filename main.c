/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:54:14 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 12:02:34 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	main(int argc, char **argv)
{
	t_stck	stack;
	t_stck	*stck;

	stck = ft_stck_init(&stack);
	if (argc > 1)
	{
		while (stck->a_size + 1 < argc)
		{
			ft_lstpush_back(&stck->a, ft_atolst(argv[stck->a_size + 1]));
			stck->a_size++;
		}
		stck->size = stck->a_size;
		ft_ntry_creator(stck);
		ft_resolve(stck);
		ft_optimize_moves(stck);
		if (stck->moves)
			ft_print_moves(stck->moves);
	}
	else
		ft_error("not enough arguments");
	return (0);
}
