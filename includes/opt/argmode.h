/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argmode.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 21:53:21 by nkawaguc          #+#    #+#             */
/*   Updated: 2026/10/15 21:57:10 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGMODE_H
# define ARGMODE_H

typedef enum e_argmode
{
	ARG_NONE, // No argument
	ARG_REQ, // Required argument (`opt value`)
	ARG_OPT, // Optional argument (`opt=value` or `opt`)
}	t_argmode;

#endif // ARGMODE_H
