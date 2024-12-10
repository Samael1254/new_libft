/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algebra.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:40 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 19:13:16 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGEBRA_H
# define ALGEBRA_H

typedef struct s_ivector2D
{
	int		x;
	int		y;
}			t_ivector2D;

typedef struct s_vector2D
{
	double	x;
	double	y;
}			t_vector2D;

typedef struct s_vector3D
{
	double	x;
	double	y;
	double	z;
}			t_vector3D;

typedef struct s_vector4D
{
	double	x;
	double	y;
	double	z;
	double	w;
}			t_vector4D;

// ADD

t_vector2D	ft_add_vectors2D(t_vector2D a, t_vector2D b);
t_vector3D	ft_add_vectors3D(t_vector3D a, t_vector3D b);

// SUB

t_vector2D	ft_sub_vectors2D(t_vector2D a, t_vector2D b);
t_vector3D	ft_sub_vectors3D(t_vector3D a, t_vector3D b);

// SCALE

t_vector2D	ft_scale_vectors2D(int lambda, t_vector2D a);
t_vector3D	ft_scale_vectors3D(int lambda, t_vector3D a);

// NORM

double		ft_vector2D_norm(t_vector2D a);
double		ft_vector3D_norm(t_vector3D a);

double		ft_vector2D_square_norm(t_vector2D a);
double		ft_vector3D_square_norm(t_vector3D a);

// NORMALIZE

t_vector2D	ft_normalize_vector2D(t_vector2D a);
t_vector3D	ft_normalize_vector3D(t_vector3D a);

// DOT PRODUCT

double		ft_dot_vectors2D(t_vector2D a, t_vector2D b);
double		ft_dot_vectors3D(t_vector3D a, t_vector3D b);

// CROSS PRODUCT

t_vector3D	ft_cross_vectors3D(t_vector3D a, t_vector3D b);

// DISTANCE

double		ft_distance2D(t_vector2D a, t_vector2D b);
double		ft_distance3D(t_vector3D a, t_vector3D b);

// MIDDLE OF TWO POINTS

t_vector2D	ft_middle2D(t_vector2D a, t_vector2D b);
t_vector3D	ft_middle3D(t_vector3D a, t_vector3D b);

// LINEAR INTERPOLATION

t_vector2D	ft_lerp2D(t_vector2D a, t_vector2D b, double lambda);
t_vector3D	ft_lerp3D(t_vector3D a, t_vector3D b, double lambda);

// ANGLES BETWEEN VECTORS

double		ft_vectors2D_angle(t_vector2D a, t_vector2D b);
double		ft_vectors3D_angle(t_vector3D a, t_vector3D b);

// CHECK ORTHOGONALITY

int			ft_are_vectors2D_ortho(t_vector2D a, t_vector2D b);
int			ft_are_vectors3D_ortho(t_vector3D a, t_vector3D b);

// CHECK COLINEARITY

int			ft_are_vectors2D_col(t_vector2D a, t_vector2D b);
int			ft_are_vectors3D_col(t_vector3D a, t_vector3D b);

// LINE EQUATION

t_vector3D	ft_line2D_equation(t_vector2D a, t_vector2D b);

// LINE DIRECTION VECTOR

t_vector2D	ft_direction_vector2D(t_vector3D line);

#endif
