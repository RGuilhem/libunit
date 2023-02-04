/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:45:32 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 17:02:59 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO fix relative imclude?
#include "../framework/libunit.h"
#include "utest_create/utest_create_tests.h"

int	main(int argc, char *argv[])
{
	t_status	status;

	status = OK;
	status |= utest_create_launcher();
	return (-status);
}
