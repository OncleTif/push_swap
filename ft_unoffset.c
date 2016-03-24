#include "ps.h"

void	ft_unoffset(t_stck *stck)
{
	void	(*f)(t_stck *stck);

	if (ft_offset(stck, ((t_ntry*)stck->a->content)->goal, 0) <= stck->size / 2)
		f = &ra;
	else
		f = &rra;
	while (ft_offset(stck, ((t_ntry*)stck->a->content)->goal, 0) )
		f(stck);
}
