/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stristim <stristim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 18:49:02 by stristim          #+#    #+#             */
/*   Updated: 2020/01/13 21:16:27 by stristim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <unistd.h>
#include "header.h"

int main()
{
    void *mlx_ptr;
    void *win_ptr;
    t_dot *a;
    t_dot *b;

    a = (t_dot*)malloc(sizeof(t_dot));
    b = (t_dot*)malloc(sizeof(t_dot));
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "mlx");

    a->x = 0;
    a->y = 0;
    b->x = 100;
    b->y = 100;
    draw_line(mlx_ptr, win_ptr, a, b);
    mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xffffff);
    mlx_key_hook(win_ptr, &key_handle, NULL);
    mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFF0000);
    mlx_hook(win_ptr, 17, 1L << 17, &win_close, NULL); //закрытие на крестик
    mlx_loop(win_ptr);
    return (0);
}