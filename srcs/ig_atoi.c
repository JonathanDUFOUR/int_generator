/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 04:08:52 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 04:13:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ig_atoi(char const *s)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (isspace(*s))
		++s;
	if ((*s == '+' || *s == '-') && *s++ == '-')
		sign = -1;
	while (isdigit(*s))
	{
		res = res * 10 + *s - '0';
		++s;
	}
	return (res * sign);
}
