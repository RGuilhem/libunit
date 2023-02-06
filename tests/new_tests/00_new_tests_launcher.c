/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_new_tests_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:45:16 by graux             #+#    #+#             */
/*   Updated: 2023/02/06 23:47:48 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../new_tests.h"

t_status	new_tests_launcher(void)
{
	size_t			routine_size;
	const t_utest	utests[] = {
		//TODO add bs_test
	};

	put_routine_title("UTEST_CREATE");
	routine_size = sizeof(utests) / sizeof(utests[0]);
	return (utest_run_routine(utests, routine_size));
}
