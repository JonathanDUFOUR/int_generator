/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ctx_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 06:49:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 09:56:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "int_generator.h"
#include "t_ctx.h"
#include "e_ret.h"

/* DEBUG */
#include <stdio.h>
/*********/

void	_ctx_init(char const **av)
{
	t_ctx *const	ctx = _ctx();

	ctx->genSize = ig_atoull(av[1]);
	ctx->edgeMin = ig_atoi(av[2]);
	ctx->edgeMax = ig_atoi(av[3]);
	if (ctx->edgeMin > ctx->edgeMax)
		ctx->ret = EDGE_ERRNO;
	if (ctx->edgeMin < 0 && ctx->edgeMax < 0)
		ctx->genSizeMax = -(ctx->edgeMin - ctx->edgeMax) + 1;
	if (ctx->edgeMin < 0 && ctx->edgeMax >= 0)
		ctx->genSizeMax = -ctx->edgeMin + ctx->edgeMax + 1;
	if (ctx->edgeMin >= 0 && ctx->edgeMax >= 0)
		ctx->genSizeMax = ctx->edgeMax - ctx->edgeMin + 1;
	if (!strcmp(av[4], "yes"))
		ctx->uniq = true;
	else if (!strcmp(av[4], "no"))
		ctx->uniq = false;
	else
		ctx->ret = FORMAT_ERRNO;
	if (ctx->uniq == true && ctx->genSize > ctx->genSizeMax)
		ctx->ret = UNIQ_SIZE_ERRNO;
}
