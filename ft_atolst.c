/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:10:15 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/09 11:22:43 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_list	*ft_atolst(char *str)
{
	t_list	*elem;
	int		nbr;

	if (!str)
		return (NULL);
	nbr = ft_atoi_strict(str);
	elem = ft_lstnew(
			ft_memcpy(
				ft_memalloc(
					sizeof(int))
				, &nbr, sizeof(int*))
			, sizeof(int*));
	return (elem);
}
