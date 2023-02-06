/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:33:16 by graux             #+#    #+#             */
/*   Updated: 2023/02/06 13:22:40 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utest_create_tests.h"

t_status	utest_create_launcher(void)
{
	size_t			routine_size;
	const t_utest	utests[] = {
	{.name = "basic_test", .func = &basic_test},
	{.name = "null_test", .func = &null_test}
	};

	put_str("UTEST_CREATE");
	routine_size = sizeof(utests) / sizeof(utests[0]);
	return (utest_run_routine(utests, routine_size));
}
