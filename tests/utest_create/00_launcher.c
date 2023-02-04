/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:33:16 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 17:36:47 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "utest_create_tests.h"

t_status	utest_create_launcher(void)
{
	size_t			routine_size;
	const t_utest	utests[] = {
	{.name = "basic_test", .func = &basic_test},
	{.name = "null_test", .func = &null_test}
	};

	//TODO print routine name
	routine_size = sizeof(utests) / sizeof(utests[0]);
	return (utest_run_routine(utests, routine_size));
}
