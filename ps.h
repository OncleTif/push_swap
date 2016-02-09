/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:55:39 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/09 12:44:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H
# include "libft/libft.h"

typedef struct s_move	t_move;

typedef struct	s_stck
{
	int		a_size;
	int		b_size;
	t_list	*a;
	t_list	*b;
}				t_stck;

struct			s_move
{
	t_stck		*stck;
	t_move		*next;
};

t_list	*ft_atolst(char*str);
void	ft_print_stack_a(t_stck *stck);
#endif
