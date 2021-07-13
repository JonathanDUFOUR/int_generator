/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lst.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:11:09 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:17:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LST_H
# define T_LST_H

# include <stdbool.h>
# include <string.h>
# include "t_elem.h"

typedef struct s_lst	t_lst;

struct s_lst
{
	t_elem	*head;
	t_elem	*tail;
	size_t	size;
};

int		ig_lst_add_back(t_lst *lst, int n);

bool	ig_lst_is_in(t_lst *lst, int n);

void	ig_lst_free(t_lst *lst);
void	ig_lst_init(t_lst *lst, t_elem *head, t_elem *tail, size_t size);
void	ig_lst_print(t_lst *lst);
void	ig_lst_push_back(t_lst *lst, t_elem *elem);

#endif
