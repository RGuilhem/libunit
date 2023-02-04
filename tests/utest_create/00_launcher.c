/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:33:16 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 17:01:22 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../framework/test_input.h"
#include "utest_create_tests.h"

t_status	utest_create_launcher(void)
{
	t_utest_ptr			utests;
	size_t				routine_size;
	const t_test_input	input[] = {
	{"basic_test", &basic_test},
	{"null_test", &null_test}
	};

	routine_size = utest_input_size(input);
	utests = utest_create_routine(input, routine_size);
	return (utest_run_routine(utests, routine_size));
}
