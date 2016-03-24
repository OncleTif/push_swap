#include "ps.h"

void	ft_unoffset(t_stck *stck)
{
	ft_move(stck, ft_offset(stck, ((t_ntry*)stck->a->content)->goal, 0));
}
