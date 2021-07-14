/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 04:07:23 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 04:08:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "t_int.h"

t_ll_uint	ig_atoull(char const *s)
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
