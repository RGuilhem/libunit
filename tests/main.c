/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:45:32 by graux             #+#    #+#             */
/*   Updated: 2023/02/06 15:01:04 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utest_create_tests.h"

int	main(int argc, char *argv[])
{
	t_status	status;

	status = OK;
	status |= utest_create_launcher();
	return (-status);
}
