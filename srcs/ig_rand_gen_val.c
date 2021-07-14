/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_rand_gen_val.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 06:29:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 09:59:00 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_ctx.h"

/* DEBUG */
#include <stdio.h>
/*********/

int	ig_rand_gen_val(void)
{
	t_ctx *const	ctx = _ctx();
	int				val;

	if (ctx->edgeMin == ctx->edgeMax)
		val = ctx->edgeMin;
	else if ((ctx->edgeMin < 0) && (ctx->edgeMax < 0))
	{
		val = -((rand() % ctx->genSizeMax) - ctx->edgeMax);
	}
	else if ((ctx->edgeMin < 0) && (ctx->edgeMax >= 0))
	{
		val = (rand() % ctx->genSizeMax) + ctx->edgeMin;
	}
	else if ((ctx->edgeMin >= 0) && (ctx->edgeMax >= 0))
	{
		val = (rand() % ctx->genSizeMax) + ctx->edgeMin;
	}
	return (val);
}
