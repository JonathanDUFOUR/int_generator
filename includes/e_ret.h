/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_ret.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:04:30 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/14 04:17:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_RET_H
# define E_RET_H

enum	e_ret
{
	SUCCESS,
	FORMAT_ERRNO,
	EDGE_ERRNO,
	UNIQ_SIZE_ERRNO,
	MALLOC_ERRNO,
	LST_DATA_ERRNO
};

#endif
