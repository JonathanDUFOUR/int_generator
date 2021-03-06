/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_rand_gen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:03:21 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 10:00:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include "int_generator.h"
#include "t_ctx.h"
#include "t_lst.h"
#include "e_ret.h"

int	ig_rand_gen(void)
{
	t_ctx *const	ctx = _ctx();
	t_lst			lst;
	int				val;

	ig_lst_init(&lst, NULL, NULL, 0);
	srand(time(NULL));
	while (_ctx()->genSize)
	{
		val = ig_rand_gen_val();
		if (ctx->uniq && ig_lst_is_in(&lst, val))
			continue ;
		ctx->ret = ig_lst_add_back(&lst, val);
		if (ctx->ret != SUCCESS)
		{
			ig_lst_free(&lst);
			return (ctx->ret);
		}
		--ctx->genSize;
	}
	ig_lst_print(&lst);
	ig_lst_free(&lst);
	return (SUCCESS);
}
