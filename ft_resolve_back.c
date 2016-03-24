#include "ps.h"

void	ft_resolve_back(t_stck **stck)
{
	int		limit;
	t_stck	*cpy;

	limit = ft_count_moves(*stck);
	ft_putendl("ap count moves");
	if (limit < 20)
	{
		cpy = ft_stck_copy(*stck);
		ft_putendl("ap stck copy");
		cpy->a = cpy->init;
		ft_moves_del(&cpy->moves);
		ft_putendl("ap move del");
		cpy->lst_move = NULL;
		ft_print_moves(cpy->moves);
		if (limit > ft_backtrack(&cpy, limit))
		{
			ft_putendl("ap bcktrack");
			ft_stck_del(stck);
			ft_putendl("ap stck del");
			ft_print_moves(cpy->moves);
			*stck = cpy;
		}
	}
}
