/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   press_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stristim <stristim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 16:31:13 by stristim          #+#    #+#             */
/*   Updated: 2020/01/13 20:35:21 by stristim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int key_handle(int key, void *param)
{
    if (key == ESC)
        exit(0);
    if (param == NULL)
        write(1, "n", 1);
    return (0);
}

int win_close(void *param)
{
    param = NULL;
    exit(0);
}