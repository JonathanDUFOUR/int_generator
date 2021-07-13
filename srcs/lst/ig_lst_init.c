/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:52:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 22:53:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_lst.h"

void	ig_lst_init(t_lst *lst, t_elem *head, t_elem *tail, size_t size)
{
	lst->head = head;
	lst->tail = tail;
	lst->size = size;
}
