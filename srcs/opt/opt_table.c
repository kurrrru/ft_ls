/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_table.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 14:45:07 by nkawaguc          #+#    #+#             */
/*   Updated: 2026/11/07 14:47:50 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opt/optdef.h"
#include "opt/optvalue.h"

const t_optdef	g_opts[] = {
{'a', "all", ARG_NONE, KEY_FILTER, FILTER_ALL, NULL, NULL},
};
