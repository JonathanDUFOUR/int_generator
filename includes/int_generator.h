/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_generator.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:20:42 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 06:45:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_GENERATOR_H
# define INT_GENERATOR_H

# include <stdbool.h>
# include "t_int.h"

int			ig_atoi(char const *s);
int			ig_check_args(int ac, char const **av);
int			ig_err_msg(int errno);
int			ig_rand_gen(void);
int			ig_rand_gen_uniq(void);
int			ig_rand_gen_val(void);

t_ll_uint	ig_atoull(char const *s);

#endif
