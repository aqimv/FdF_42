/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skennith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:07:24 by skennith          #+#    #+#             */
/*   Updated: 2020/01/23 22:07:26 by skennith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			main(int av, char **ac)
{
	t_fdf	*data;

	if (av != 2)
		error_proc(ERR_USAGE);
	data = fdf_init();
	if (check_file(ac[1]) == -1 || read_file(data->map, ac[1]) == -1)
		error_proc(ERR_FILE);
	data->camera->zoom = min_v((WIDTH_WIN / data->map->width_map) / 1.7,
			(HEIGHT_WIN / data->map->height_map) / 1.7);
	data->camera->zoom_max = data->camera->zoom;
	draw(data);
	control(data);
	mlx_loop(data->mlx);
	return (0);
}
