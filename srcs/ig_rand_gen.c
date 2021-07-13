/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_rand_gen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:03:21 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:23:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include "t_int.h"
#include "t_lst.h"
#include "e_ret.h"

int	ig_rand_gen(t_ll_uint n)
{
	t_lst	lst;
	int		val;
	int		ret;

	ig_lst_init(&lst, NULL, NULL, 0);
	srand(time(NULL));
	while (n--)
	{
		val = rand();
		ret = ig_lst_add_back(&lst, val);
		if (ret != SUCCESS)
		{
			ig_lst_free(&lst);
			return (ret);
		}
	}
	ig_lst_print(&lst);
	ig_lst_free(&lst);
	return (SUCCESS);
}
