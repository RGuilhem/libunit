/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utest_create_tests.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:44:35 by graux             #+#    #+#             */
/*   Updated: 2023/02/06 15:41:21 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTEST_CREATE_TESTS_H
# define UTEST_CREATE_TESTS_H

# include "../framework/libunit.h"

t_status	utest_create_launcher(void);
t_status	basic_test(void);
t_status	null_test(void);
t_status	segv_test(void);

#endif
