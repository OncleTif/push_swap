/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:55:39 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/09 11:32:20 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H
# include "libft/libft.h"

typedef struct	s_stck
{
	int		a_size;
	int		b_size;
	t_list	*a;
	t_list	*b;
}				t_stck;

t_list	*ft_atolst(char*str);
void	ft_print_stack_a(t_stck *stck);
#endif
