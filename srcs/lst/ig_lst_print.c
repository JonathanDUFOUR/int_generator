/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:17:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:25:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "t_lst.h"

void	ig_lst_print(t_lst *lst)
{
	t_elem const	*elem = lst->head;

	while (elem)
	{
		printf("%d", elem->n);
		if (elem->next)
			printf(" ");
		elem = elem->next;
	}
	printf("\n");
}
