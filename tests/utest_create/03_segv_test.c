/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:37:01 by graux             #+#    #+#             */
/*   Updated: 2023/02/06 15:42:56 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utest_create_tests.h"

t_status	segv_test(void)
{
	int	*arr;

	arr = 0;
	arr[3] = 4;
	return (FAIL);
}