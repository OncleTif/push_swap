#include "ps.h"

int	ft_sortiness(t_stck *stck)
{
	t_list	*elem;
	int		first;

	elem = stck->a;
	first = 1;
	while (elem)
	{
		if (((t_ntry*)elem->content)->goal != ((t_ntry*)elem->content)->init)
		{
			stck->end = ((t_ntry*)elem->content)->init;
			if (first)
				stck->bgin = ((t_ntry*)elem->content)->init;
			first = 0;
		}
		elem = elem->next;
	}
	return (stck->end - stck->bgin);
}
