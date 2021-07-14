/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 03:56:54 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 07:25:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_CTX_H
# define T_CTX_H

# include <stdbool.h>
# include "t_int.h"

typedef struct s_ctx	t_ctx;

struct s_ctx
{
	t_ll_uint	genSize;
	t_ll_uint	genSizeMax;
	int			edgeMin;
	int			edgeMax;
	bool		uniq;
	int			ret;
};

void	_ctx_init(char const **av);

t_ctx	*_ctx(void);

#endif
