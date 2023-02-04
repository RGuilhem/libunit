/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:50:54 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 16:59:10 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "status.h"
# include "test_input.h"
# include <stddef.h>

typedef struct s_utest	*t_utest_ptr;

t_utest_ptr	utest_create(char *name, int (*func)(void));
t_utest_ptr	utest_create_routine(const t_test_input *inputs, size_t len);
void		utest_destroy(t_utest_ptr utest);
void		utest_clear_list(t_utest_ptr *utests);
void		utest_add(t_utest_ptr utest, char *name, int (*func)(void));

t_status	utest_run(t_utest_ptr utest);
t_status	utest_run_routine(t_utest_ptr ustest, size_t routine_size);

//TODO not visible to api
void		utest_parent_handle(t_utest_ptr utest);
void		utest_child_handle(t_utest_ptr utest);

//TODO implement
size_t		utest_input_size(const t_test_input inputs[]);
// Helpers

#endif
