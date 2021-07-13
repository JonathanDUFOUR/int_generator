/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:39:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 21:46:21 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "t_int.h"
#include "e_ret.h"

static t_ll_uint	ig_atoull(char const *s)
{
	t_ll_uint	n;

	n = 0;
	while (isspace(*s))
		++s;
	if (*s == '+')
		++s;
	while (isdigit(*s))
		n = n * 10 + *s++ - '0';
	return (n);
}

int	ig_check_args(int const ac, char const **av, t_ll_uint *n, bool *uniq)
{
	if (ac != 3)
		return (FORMAT_ERRNO);
	*n = ig_atoull(av[1]);
	if (!strcmp(av[2], "yes"))
	{
		if (*n > 4294967296)
			return (UNIQ_SIZE_ERRNO);
		*uniq = true;
		return (SUCCESS);
	}
	else if (!strcmp(av[2], "no"))
	{
		*uniq = false;
		return (SUCCESS);
	}
	else
		return (FORMAT_ERRNO);
}
