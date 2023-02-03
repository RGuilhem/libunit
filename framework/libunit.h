/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:50:54 by graux             #+#    #+#             */
/*   Updated: 2023/02/03 21:47:49 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "status.h"

typedef struct s_utest	*t_utest_ptr;

t_utest_ptr	utest_create(char *name, int (*func)(void));
void		utest_destroy(t_utest_ptr utest);
void		utest_clear_list(t_utest_ptr *utests);
void		utest_add(t_utest_ptr utest, char *name, int (*func)(void));

t_status	utest_run(t_utest_ptr utest);
t_status	utest_run_all(t_utest_ptr ustest);

//TODO not visible to api
void		utest_parent_handle(t_utest_ptr utest);
void		utest_child_handle(t_utest_ptr utest);

// Helpers

#endif
