/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stristim <stristim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 18:56:39 by stristim          #+#    #+#             */
/*   Updated: 2020/01/13 21:15:54 by stristim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
/*
void draw_line(void *mlx_ptr, void *win_ptr, t_dot *a, t_dot *b)
{
    double step;
    // int v;
    int m;
    double n;

    printf("hello");
    mlx_pixel_put(mlx_ptr, win_ptr, 100, 100, 0x00ff00);
    if (a->x > b->x || a->y > b->y)
        draw_line (mlx_ptr, win_ptr, b, a);
        
    if (ft_abc(b->x - a->x) > ft_abc(b->y - a->y))
    {
        step = (double)(b->y - a->y)/(b->x - a->x);
        m = a->x;
        n = a->y;
        while (m < b->x)
        {
            mlx_pixel_put(mlx_ptr, win_ptr, m++, (int)n, 0x00ff00);
            n = n + step;
        }
    }
    else
    {
        step = (double)(b->x - a->x)/(b->y - a->y);
        m = a->y;
        n = a->x;
        while(m <= b->y)
        {
            mlx_pixel_put(mlx_ptr, win_ptr, (int)n, m++, 0x00ff00);
            n = n + step;
        }
    }
}
*/
void	draw_line(void *mlx_ptr, void *win_ptr, t_dot *a, t_dot *b)
{
	double	step;
	int		i;

	i = 0;
    printf("hello\n");
	if (a->x > b->x || (b->x - a->x <= ft_abs(b->y - a->y) && a->y > b->y))
		draw_line(mlx_ptr, win_ptr, b, a);
	else if (b->x - a->x > ft_abs(b->y - a->y))
	{
        printf("1\n");
		step = (double)(a->y - b->y) / (a->x - b->x);
		while (i <= b->x - a->x)
		{
            mlx_pixel_put(mlx_ptr, win_ptr, a->x + i, a->y + i * step, 0x00ff00);
			++i;
		}
	}
	else
	{
        printf("2\n");
		step = (double)(a->x - b->x) / (a->y - b->y);
		while (i <= b->y - a->y)
		{
            mlx_pixel_put(mlx_ptr, win_ptr, a->x + i * step, a->y + i, 0x00ff00);
			++i;
		}
	}
}