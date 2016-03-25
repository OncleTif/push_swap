/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:54:14 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 13:06:21 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	main(int argc, char **argv)
{
	t_stck	*stck;
	int		srt;

	if (argc > 1)
	{
		stck = ft_stck_init();
		ft_ntry_init(stck, argc, argv);
		if (ft_sorted_offset(stck))
			ft_unoffset(stck);
		else
		{
			if ((srt = ft_sortiness(stck)) < 2 || (srt == 2 && stck->size == 3))
				ft_resolve_a(stck);
			else
				ft_resolve(stck);
			ft_optimize_moves(stck);
			ft_resolve_back(&stck);
		}
		ft_print_moves(stck->moves);
	}
	else
		ft_error("not enough arguments");
	return (0);
}
