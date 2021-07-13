/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:23:31 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:02:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_lst.h"
#include "e_ret.h"

int	ig_lst_add_back(t_lst *lst, int n)
{
	t_elem	*new;

	new = malloc(sizeof(t_elem));
	if (!new)
		return (MALLOC_ERRNO);
	new->n = n;
	new->next = NULL;
	if (!lst->head && !lst->tail && !lst->size)
		ig_lst_init(lst, new, new, 1);
	else if (lst->head && lst->tail && lst->size)
		ig_lst_push_back(lst, new);
	else
		return (LST_DATA_ERRNO);
	return (SUCCESS);
}
