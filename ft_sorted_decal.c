#include "ps.h"

int	ft_sorted_offset(t_list *list)
{
	t_list	*elem;
	int		sorted;
	int		offset;
	int		range;

	sorted = 1;
	range = 0;
	offset =
	elem = list;
	while (sorted && elem)
	{
		if (((t_ntry*)elem->content)->goal != range)
			sorted = 0;
		elem = elem->next;
		range++;
	}
	return (sorted);
}
