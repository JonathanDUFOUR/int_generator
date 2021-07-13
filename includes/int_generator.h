/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_generator.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:20:42 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:11:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_GENERATOR_H
# define INT_GENERATOR_H

# include <stdbool.h>
# include "t_int.h"

int		ig_check_args(int const ac, char const **av, t_ll_uint *n, bool *uniq);
int		ig_err_msg(int errno);
int		ig_rand_gen(t_ll_uint n);
int		ig_rand_gen_uniq(t_ll_uint n);

#endif
