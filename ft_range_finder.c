/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 11:06:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/21 14:04:04 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int			ft_range_finder(t_stck *stck, int range)
{
	int		i;
	int		j;
	int		k;
	int		ret;
	t_list	*elem;

	elem = stck->a;
	i = 0;
	j = -1;
	k = -1;
	while (elem)
	{
		if (((t_ntry*)elem->content)->goal == range)
			j = i;
		else if (((t_ntry*)elem->content)->goal == range + 1)
			k = i;
		elem = elem->next;
		i++;
	}
	if (j <= stck->a_size / 2)
		ret = ft_rotate_times(stck, j, k);
	else
		ret = ft_rev_rotate_times(stck, stck->a_size - j, stck->a_size - k);
	return (ret);
}
