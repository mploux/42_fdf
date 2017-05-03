/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:27:37 by mploux            #+#    #+#             */
/*   Updated: 2016/12/03 22:12:11 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths.h"

t_vec2		vec2(double x, double y)
{
	t_vec2 v;

	v.x = x;
	v.y = y;
	return (v);
}