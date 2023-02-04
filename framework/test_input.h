/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_input.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graux <graux@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:29:25 by graux             #+#    #+#             */
/*   Updated: 2023/02/04 16:29:06 by graux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_INPUT_H
# define TEST_INPUT_H

//TODO maybe not a struct just typedef
typedef struct s_test_input
{
	char	*name;
	int		(*utest_func)(void);
}				t_test_input;

#endif
