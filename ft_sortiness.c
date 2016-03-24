#include "ps.h"

int	ft_sortiness(t_stck *stck)
{
	t_list	*elem;

	elem = stck->a;
	while (elem)
	{
		if (((t_ntry*)elem->content)->goal != ((t_ntry*)elem->content)->init)
		{
			stck->end = ((t_ntry*)elem->content)->init;
			if (!stck->bgin)
				stck->bgin = ((t_ntry*)elem->content)->init;
		}
		elem = elem->next;
	}
	return (stck->end - stck->bgin);
}
