/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 15:53:40 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/17 10:46:04 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

t_stck	*ft_stck_init(t_stck *stck)
{
	stck->a = NULL;
	stck->b = NULL;
	stck->a_size = 0;
	stck->size = 0;
	stck->b_size = 0;
	return (stck);
}
