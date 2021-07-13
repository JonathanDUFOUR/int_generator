/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ig_err_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:16:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/07/13 23:24:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "e_ret.h"

int	ig_err_msg(int errno)
{
	printf("\e[31mError:\n");
	if (errno == FORMAT_ERRNO)
	{
		printf("Wrong argument format\n\n");
		printf("\e[33mUsage: ./generator <GenSize>[n] <UniqueOnly>[yes/no]\n");
	}
	else if (errno == UNIQ_SIZE_ERRNO)
	{
		printf("GenSize too large for UniqueOnly integers generation\n\n");
		printf("\e[33mMaximum GenSize for UniqueOnly is 4294967296\n");
	}
	else if (errno == MALLOC_ERRNO)
		printf("malloc() failed\n");
	printf("\n\e[31mTry Again 🤪\e[0m\n\n");
	return (errno);
}
