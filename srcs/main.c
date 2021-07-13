/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:03:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 22:03:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "int_generator.h"
#include "e_ret.h"

int	main(int const ac, char const **av)
{
	t_ll_uint	n;
	bool		uniq;
	int			ret;

	ret = ig_check_args(ac, av, &n, &uniq);
	if (ret != SUCCESS)
		exit(ig_err_msg(ret));
	if (uniq)
		ig_rand_gen_uniq(n);
	else
		ig_rand_gen(n);
	return (SUCCESS);
}
