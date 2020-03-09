/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skennith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:10:33 by skennith          #+#    #+#             */
/*   Updated: 2020/02/19 15:10:36 by skennith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				check_point(t_point p1, t_point p2)
{
	if (((max_v(p1.x, p2.x) > 0) && (min_v(p1.x, p2.x)
	< WIDTH_WIN)) && ((max_v(p1.y, p2.y) > 0) && (min_v(p1.y, p2.y)
	< HEIGHT_WIN)))
		return (1);
	return (0);
}

float			mod(float a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

float			max_v(float a, float b)
{
	return (a > b ? a : b);
}

float			min_v(float a, float b)
{
	return (a < b ? a : b);
}
