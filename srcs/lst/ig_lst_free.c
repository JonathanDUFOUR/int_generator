/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:08:32 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:10:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_lst.h"

void	ig_lst_free(t_lst *lst)
{
	t_elem	*next;

	while (lst->head)
	{
		next = lst->head->next;
		free(lst->head);
		lst->head = next;
	}
	lst->tail = NULL;
	lst->size = 0;
}
