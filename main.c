/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:54:14 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/09 11:32:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int	main(int argc, char **argv)
{
	t_stck	stack;
	t_stck	*stck;

	stck = &stack;
	stck->a_size = 0;
	if (argc > 1)
	{
		while (stck->a_size + 1 < argc)
		{
			ft_lstadd(&stck->a, ft_atolst(argv[stck->a_size + 1]));
			stck->a_size++;
		}
		ft_print_stack_a(stck);
	}
	else
		ft_error("not enough arguments");
	return (0);
}
