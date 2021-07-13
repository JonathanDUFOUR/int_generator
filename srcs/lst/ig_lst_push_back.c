/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_lst_psuh_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:00:53 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:02:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_lst.h"

void	ig_lst_push_back(t_lst *lst, t_elem *elem)
{
	lst->tail->next = elem;
	lst->tail = elem;
	++lst->size;
}
