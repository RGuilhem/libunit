/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _utest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:10:14 by graux             #+#    #+#             */
/*   Updated: 2023/02/03 19:14:35 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _UTEST_H
# define _UTEST_H

struct s_utest
{
	struct s_utest	*next;
	char			*name;
	int				(*utest_func)(void);
};

#endif
