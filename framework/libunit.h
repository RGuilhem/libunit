/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:50:54 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 17:40:11 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "status.h"
# include <stddef.h>

typedef struct s_utest
{
	char			*name;
	int				(*func)(void);
}		t_utest;

t_status	utest_run(const t_utest *utest);
t_status	utest_run_routine(const t_utest *utests, size_t routine_size);

void		utest_parent_handle(t_utest *utest);
void		utest_child_handle(t_utest *utest);

// Helpers
void		put_str(const char *str);
void		put_nbr(size_t nbr);

#endif
