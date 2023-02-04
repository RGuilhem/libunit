/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utest_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:50:39 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 18:00:21 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "color.h"
#include <stdlib.h>

static void	print_recap(size_t passed, size_t total)
{
	put_str("\n");
	if (passed == total)
		put_str(GREEN"OK "RESET);
	else
		put_str(RED"FAIL "RESET);
	put_nbr(passed);
	put_str("/");
	put_nbr(total);
	put_str("\n");
}

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
	i = 0;
	passed_tests = 0;
	while (i < routine_size)
	{
		if (utest_run(&utests[i]) == FAIL)
			status = FAIL;
		else
			passed_tests++;
		i++;
	}
	print_recap(passed_tests, routine_size);
	return (status);
}
