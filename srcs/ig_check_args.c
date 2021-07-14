/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:39:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 07:25:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "int_generator.h"
#include "t_ctx.h"
#include "e_ret.h"

int	ig_check_args(int ac, char const **av)
{
	t_ctx *const	ctx = _ctx();

	if (ac != 5)
		return (FORMAT_ERRNO);
	_ctx_init(av);
	if (ctx->ret != SUCCESS)
		return (ctx->ret);
	return (SUCCESS);
}
