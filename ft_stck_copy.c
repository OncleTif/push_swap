/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 14:12:10 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/22 14:17:17 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_stck	*ft_stck_copy(t_stck *stck)
{
	t_stck	*cpy;

	cpy = NULL;
	if (stck)
	{
		if (!(cpy = (t_stck*)ft_memalloc(sizeof(t_stck))))
			ft_error("allocation of stack copy error");
		ft_memcpy(cpy, stck, sizeof(t_stck));
	}
	return (cpy);
}
