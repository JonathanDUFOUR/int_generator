/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_elem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:09:47 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 22:10:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ELEM_H
# define T_ELEM_H

typedef struct s_elem	t_elem;

struct s_elem
{
	int		n;
	t_elem	*next;
};

#endif
