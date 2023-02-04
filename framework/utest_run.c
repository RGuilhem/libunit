/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utest_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:50:39 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 17:29:14 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>

t_status	utest_run(const t_utest *utest)
{
	//TODO implement
	return (FAIL);
}

t_status	utest_run_routine(const t_utest *utests, size_t routine_size)
{
	size_t		i;
	size_t		passed_tests;
	t_status	status;

	status = OK;
	i = -1;
	passed_tests = 0;
	while (++i < routine_size)
	{
		if (utest_run(&utests[i]) == FAIL)
			status = FAIL;
		else
			passed_tests++;
	}
	return (status);
}
