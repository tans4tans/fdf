/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stristim <stristim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 19:40:38 by stristim          #+#    #+#             */
/*   Updated: 2020/01/12 18:41:09 by stristim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H_INCLUDED
# define FDF_H_INCLUDED
# include "libft/libft.h"
#include <mlx.h>
#include <unistd.h>
#define ESC 53

typedef struct	s_dot
{
	int		x;
	int		y;
	// int		color;
}				t_dot;

int key_handle(int key, void *param);
int win_close(void *param);
void draw_line(void *mlx_ptr, void *win_ptr, t_dot *a, t_dot *b);

#endif