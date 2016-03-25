/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 13:47:33 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/25 14:16:20 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H
# include "libft/libft.h"

typedef struct s_move	t_move;
typedef struct s_ntry	t_ntry;
typedef struct s_stck	t_stck;

struct					s_stck
{
	int		a_size;
	int		size;
	int		b_size;
	int		bgin;
	int		end;
	t_list	*a;
	t_list	*init;
	t_list	*b;
	int		debug;
	t_move	*moves;
	t_move	*lst_move;
	void	(*print)(char*, t_stck*);
};

struct					s_move
{
	char				*op;
	t_move				*next;
};

struct					s_ntry
{
	int					init;
	int					goal;
	int					value;
};

t_list					*ft_atolst(char*str);
void					ft_print_stack_a(t_stck *stck);
void					ft_print(char *str, t_stck *stck);
void					ft_print_first(char *str, t_stck *stck);
void					ft_push_range_to_b(t_stck *stck, int range);
int						ft_range_finder(t_stck *stck, int range);
int						ft_rotate_times(t_stck *stck, int times, int next);
int						ft_rev_rotate_times(t_stck *stck, int times, int next);
void					ft_push_b_to_a(t_stck *stck);
void					ft_resolve(t_stck *stck);
void					ft_resolve_back(t_stck **stck);
void					ft_resolve_a(t_stck *stck);
void					ft_ntry_init(t_stck *stck, int argc, char **argv);
void					ft_bubble_solve(t_stck *stck);
int						ft_offset(t_stck *stck, int goal, int pos);
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
t_stck					*ft_stck_init();
void					ft_newmove(t_stck *stck, char *str);
void					ft_print_moves(t_move *move);
void					ft_optimize_moves(t_stck *stck);
void					ft_unoffset(t_stck *stck);
void					ft_move(t_stck *stck, int rge);
int						ft_reduce(t_stck *stck, char *op1, char *op2);
void					ft_freemove(t_move *move);
int						ft_count_moves(t_stck *stck);
t_list					*ft_lsntry_copy(t_list *elem);
t_move					*ft_moves_copy(t_move *move);
t_stck					*ft_stck_copy(t_stck *stck);
void					ft_moves_del(t_move **move);
void					ft_ntry_del(void *ntry, size_t i);
void					ft_stck_del(t_stck **stck);
int						ft_backtrack(t_stck **stck, int limit);
int						ft_sorted(t_list *list);
int						ft_sorted_offset(t_stck *stck);
int						ft_stck_swap(t_stck **a, t_stck **b, int bst);
t_move					*ft_find_lst_move(t_move *moves);
int						ft_sortiness(t_stck *stck);
#endif
