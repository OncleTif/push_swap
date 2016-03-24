#include "ps.h"

int	ft_sorted_offset(t_stck *stck)
{
	t_list	*elem;
	int		sorted;
	int		offset;
	int		range;

	sorted = 1;
	range = 0;
	elem = stck->a;
	offset = ft_offset(stck, ((t_ntry*)elem->content)->goal, range);
	while (sorted && elem)
	{
		if (offset != ft_offset(stck, ((t_ntry*)elem->content)->goal, range))
			sorted = 0;
		elem = elem->next;
		range++;
	}
	return (sorted);
}
