/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:03:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 07:28:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "int_generator.h"
#include "t_ctx.h"
#include "e_ret.h"

int	main(int ac, char const **av)
{
	int		ret;

	ret = ig_check_args(ac, av);
	if (ret != SUCCESS)
		return (ig_err_msg(ret));
	ret = ig_rand_gen();
	if (ret != SUCCESS)
		return (ig_err_msg(ret));
	return (SUCCESS);
}
