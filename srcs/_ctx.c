/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ctx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 04:20:05 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 07:27:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_ctx.h"
#include "e_ret.h"

t_ctx	*_ctx(void)
{
	static t_ctx	ctx = {0, 0, 0, 0, false, SUCCESS};

	return (&ctx);
}
