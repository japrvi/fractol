/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:27:58 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/01 19:26:16 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <math.h>
# include <errno.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>

//Esta estructura podria tener mas atributos por modulo y argumento complejo
typedef struct	s_complex
{
	double	real;
	double	im;
} t_complex;

typedef struct s_data
{
	char			type;
	unsigned int	iterations;
	float			zoom;
	double			x_max;
	double			x_min;
	double			y_max;
	double			y_min;
	double			x_range;
	double			y_range;
	t_complex		z_o;
} t_data;

typedef struct s_color
{
	unsigned int	red;
	unsigned int	blue;
	unsigned int	green;
	unsigned int	transparent;

} t_color;

typedef struct s_pixel
{
	int	x_pixel;
	int	y_pixel;
	int	color;
} t_pixel;

//Funcion que genera la imagen. LLama pixel por pixel a ls funciones que asignan el numero compejo

//Funciones para lanzar por pantalla las distintas posibilidades que admite el programa.
char			check_arguments(int argc, char **argv);
//Funciones para asiganar el numero complejo al pixel.
t_complex		assigner(int x, int y, t_data data);

//Funciones para implementar los fractales. Reciben un numero complejo y devuelven el numero de 
//iteraciones a partir del cual la sucesion recursiva diverge.
//->Mandelbrot
unsigned int	ft_mandelbrot(t_complex z);
//->Julia
unsigned int	ft_julia(t_complex z);
//->Newton
unsigned int	ft_newton(t_complex z);


//Funciones para implementar el zoom. Este sera dependiente de la posicion del cursor. Consistira en una actualizacion de los parametros que definen el fractal.
void	zoom();
//Funciones para asignar el rango de colores. Consistira en cambiar los valores de los arametros que definen el color.
void	r_color();
//Funcion para obener el pixel asociado al mouse.
t_pixel	ft_mouse();
//Funciones para asignar color al pixel.
int		ft_color(unsigned int it, t_color param, t_pixel);
//Funciones para implementar desplazamiento

#endif
