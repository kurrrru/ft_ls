/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optdef.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:05:38 by nkawaguc          #+#    #+#             */
/*   Updated: 2026/11/07 14:29:11 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTDEF_H
# define OPTDEF_H

# include "core/ls.h"
# include "opt/argmode.h"
# include "opt/optkey.h"

typedef struct s_word
{
	const char	*name;
	int			value;
}	t_word;

typedef int	(*t_opthandler)(t_ls *ls, const char *arg);

typedef struct s_optdef
{
	char			shortc;
	const char		*longname;
	t_argmode		argmode;
	t_key			key;
	int				value;
	const t_word	*words;
	t_opthandler	handler;
}	t_optdef;

#endif // OPTDEF_H
