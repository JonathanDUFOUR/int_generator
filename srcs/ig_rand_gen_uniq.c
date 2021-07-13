/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_rand_gen_uniq.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:20:58 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:49:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include "t_int.h"
#include "t_lst.h"
#include "e_ret.h"

int	ig_rand_gen_uniq(t_ll_uint n)
{
	t_lst	lst;
	int		sign;
	int		val;
	int		ret;

	ig_lst_init(&lst, NULL, NULL, 0);
	srand(time(NULL));
	while (n)
	{
		sign = 1;
		if (rand() % 2)
			sign = -1;
		val = rand() * sign;
		if (ig_lst_is_in(&lst, val))
			continue ;
		ret = ig_lst_add_back(&lst, val);
		if (ret != SUCCESS)
			break ;
		--n;
	}
	if (ret == SUCCESS)
		ig_lst_print(&lst);
	ig_lst_free(&lst);
	return (ret);
}
