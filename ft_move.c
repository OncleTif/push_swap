#include "ps.h"

void	ft_move(t_stck *stck, int rge)
{
	int	i;

	i = 0;
	if (rge < 0)
		rge = stck->size + rge;

	if (rge <= stck->size / 2)
	{
		while (i < rge)
		{
			ra(stck);
			i++;
		}
	}
	else
	{
		while (i < stck->size - rge)
		{
			rra(stck);
			i++;
		}
	}
}
