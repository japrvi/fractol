/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:20:53 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/08 15:19:30 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

unsigned int	ft_mandelbrot(t_complex z, t_complex c,
					unsigned int iterations, unsigned int iteration)
{
	double	x;
	double	y;
	double	power_x;
	double	power_y;

	x = z.real;
	y = z.im;
	power_x = pow(x, 2);
	power_y = pow(y, 2);
	if (iterations == iteration)
		return (iteration);
	if (power_x + power_y > 4)
		return (iteration);
	else
	{
		z.real = power_x - power_y + c.real;
		z.im = 2 * x * y + c.im;
		return (ft_mandelbrot(z, c, iterations, ++iteration));
	}
}

unsigned int	ft_julia(t_complex z, t_complex c,
					unsigned int iterations, unsigned int iteration)
{
	double	x;
	double	y;
	double	power_x;
	double	power_y;

	x = z.real;
	y = z.im;
	power_x = pow(x, 2);
	power_y = pow(y, 2);
	if (iterations == iteration)
		return (iteration);
	if (power_x + power_y > 4)
		return (iteration);
	else
	{
		z.real = power_x - power_y + c.real;
		z.im = 2 * x * y + c.im;
		return (ft_julia(z, c, iterations, ++iteration));
	}
}

unsigned int	ft_newton(t_complex z,
					unsigned int iterations, unsigned int iteration)
{
	double	x;
	double	y;
	double	power_x;
	double	power_y;

	x = z.real;
	y = z.im;
	power_x = pow(x, 2);
	power_y = pow(y, 2);
	if (iterations == iteration)
		return (iteration);
	if (power_x + power_y > 4)
		return (iteration);
	else
	{
		z.real = x - (x / (2 * (power_x - power_y)));
		z.im = y + (y / (2 * (power_x - power_y)));
		return (ft_newton(z, iterations, ++iteration));
	}
}
