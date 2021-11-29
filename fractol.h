/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:27:58 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/11/29 17:07:40 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <math.h>
# include <errno.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>

//Funciones para lanzar por pantalla las distintas posibilidades que admite el programa.
char	cheack_arguments(int argc, char **argv);
//Funciones para asiganar el numero complejo al pixel.
//Funciones para implementar los fractales. Reciben un numero complejo y devuelven el numero de 
//iteraciones a partir del cual la sucesion recursiva diverge.
//->Mandelbrot
int		ft_mandelbrot(double real, double im);
//->Julia
int		ft_julia(double real, double im);
//->Newton
int		ft_newton(double real, double im);
//Funciones para implementar el zoom.
//Funciones para asignar el rango de colores.
//Funcion para obener el pixel asociado al mouse.
//Funciones para asignar color al pixel.

#endif
