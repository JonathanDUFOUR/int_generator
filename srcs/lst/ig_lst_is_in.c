/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_lst_is_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:23:41 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 22:25:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_lst.h"

bool	ig_lst_is_in(t_lst *lst, int n)
{
	t_elem const	*elem = lst->head;

	while (elem)
	{
		if (elem->n == n)
			return (true);
		elem = elem->next;
	}
	return (false);
}
