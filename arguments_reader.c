/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_reader.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:33:36 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/01 14:21:03 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

char	check_arguments(int argc, char **argv)
{
	if (argc == 2)
	{
		if(argv[1][0] == 'M')
			return ('M');
		if (argv[1][0] == 'J')
			return ('J');
		if (argv[1][0] == 'N')
			return ('N');
	}
	perror("Avalaible fractasls: (M) Mandelbrot, (J) Julia, (N) Newtown");
	return (0);
}
