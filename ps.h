/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 15:55:39 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/14 16:43:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H
# include "libft/libft.h"

typedef struct s_move	t_move;
typedef struct s_ntry	t_ntry;

typedef struct			s_stck
{
	int		a_size;
	int		b_size;
	t_ntry	*ntry;
	t_list	*a;
	t_list	*b;
}						t_stck;

struct					s_move
{
	t_stck				*stck;
	char				*op;
	t_move				*next;
};

struct					s_ntry
{
	int					init;
	int					goal;
	int					value;
	int					offset;
};

t_list					*ft_atolst(char*str);
void					ft_print_stack_a(t_stck *stck);
void					ft_resolve(t_stck *stck);
void					ft_ntry_creator(t_stck *stck);
void					ft_bubble_solve(t_stck *stck);
void					ft_offset(t_stck *stck);
t_list					*ft_lstswap(t_list *lst);
void					sa(t_stck *stck);
void					sb(t_stck *stck);
void					ss(t_stck *stck);
t_list					*ft_lstrotate(t_list *lst);
void					ra(t_stck *stck);
void					rb(t_stck *stck);
void					rs(t_stck *stck);
t_list					*ft_lstrrotate(t_list *lst);
void					rra(t_stck *stck);
void					rrb(t_stck *stck);
void					rrs(t_stck *stck);
void					pa(t_stck *stck);
void					pb(t_stck *stck);
t_stck					*ft_stck_init(t_stck *stck);
t_move					*ft_newmove(t_move *nxt, t_stck *stck);
#endif
