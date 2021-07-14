/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_err_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:16:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 10:08:14 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "t_ctx.h"
#include "t_int.h"
#include "e_ret.h"

int	ig_err_msg(int errno)
{
	t_ctx *const	ctx = _ctx();

	printf("\e[31mError:\n");
	if (errno == FORMAT_ERRNO)
	{
		printf("Wrong argument format\n\n");
		printf("\e[33mUsage: \
./generator <GenSize>[n] <EdgeMin>[n] <EdgeMax>[n] <UniqueOnly>[yes/no]\n");
	}
	else if (errno == EDGE_ERRNO)
		printf("edgeMin is greater than edgeMax\n");
	else if (errno == UNIQ_SIZE_ERRNO)
	{
		printf("GenSize too large for UniqueOnly generation\n\n");
		printf("\e[33m\
Max GenSize for UniqueOnly generation between %d and %d is %llu\n", \
ctx->edgeMin, ctx->edgeMax, ctx->genSizeMax);
	}
	else if (errno == MALLOC_ERRNO)
		printf("malloc() failed\n");
	printf("\n\e[31mTry Again 🤪\e[0m\n\n");
	return (errno);
}
