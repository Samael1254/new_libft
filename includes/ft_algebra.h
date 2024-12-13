/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algebra.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:40 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/13 13:33:27 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGEBRA_H
# define ALGEBRA_H

typedef enum e_axis
{
	X_AXIS = 0,
	Y_AXIS = 1,
	Z_AXIS = 2,
}			t_axis;

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
t_vector4D	ft_add_vectors4D(t_vector4D a, t_vector4D b);

// SUB

t_vector2D	ft_sub_vectors2D(t_vector2D a, t_vector2D b);
t_vector3D	ft_sub_vectors3D(t_vector3D a, t_vector3D b);
t_vector4D	ft_sub_vectors4D(t_vector4D a, t_vector4D b);

// SCALE

t_vector2D	ft_scale_vector2D(int lambda, t_vector2D a);
t_vector3D	ft_scale_vector3D(int lambda, t_vector3D a);

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

// DISTANCE BETWEEN TWO POINTS

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

// ANGLE CONVERSION

double		ft_rad_to_deg(double rad);
double		ft_deg_to_rad(double deg);

// CHECK ORTHOGONALITY

int			ft_are_vectors2D_ortho(t_vector2D a, t_vector2D b);
int			ft_are_vectors3D_ortho(t_vector3D a, t_vector3D b);

// CHECK COLINEARITY

int			ft_are_vectors2D_col(t_vector2D a, t_vector2D b);
int			ft_are_vectors3D_col(t_vector3D a, t_vector3D b);

// 2D LINE EQUATION

t_vector3D	ft_line2D_equation(t_vector2D a, t_vector2D b);

// 2D LINE DIRECTION VECTOR

t_vector2D	ft_direction_vector2D(t_vector3D line);

// 2D LINES INTERSECTION

t_vector2D	ft_lines2D_intersection(t_vector3D l1, t_vector3D l2);

// VECTOR CONVERSION

t_vector2D	ft_3Dto2D_vector(t_vector3D v3);
t_vector3D	ft_4Dto3D_vector(t_vector4D v4);
t_vector4D	ft_3Dto4D_vector(t_vector3D v3);
t_vector3D	ft_2Dto3D_vector(t_vector2D v2);
t_vector2D	ft_i2Dto2D_vector(t_ivector2D vi2);

// SET VECTOR

void		ft_set_vector2D(t_vector2D *v, double x, double y);
void		ft_set_vector3D(t_vector3D *v, double x, double y, double z);

// INIT VECTOR

t_vector2D	ft_init_vector2D(double value);
t_vector3D	ft_init_vector3D(double value);
t_vector4D	ft_init_vector4D(double value);

// ROTATE VECTOR

t_vector4D	ft_rotate_vector4D(t_vector4D v, t_vector3D rotator);
t_vector3D	ft_rotate_vector3D(t_vector3D v, t_vector2D rotator);

// TRANSLATE VECTOR

t_vector3D	ft_translate_vector3D(t_vector3D v, t_vector2D translator);
t_vector4D	ft_translate_vector4D(t_vector4D v, t_vector3D translator);

// GET BASE VECTOR

t_vector2D	ft_get_base_vector2D(t_axis axis);
t_vector3D	ft_get_base_vector3D(t_axis axis);
t_vector4D	ft_get_base_vector4D(t_axis axis);

// SET NULL MATRIX

void		ft_set_null_matrix2D(double m[2][2]);
void		ft_set_null_matrix3D(double m[3][3]);
void		ft_set_null_matrix4D(double m[4][4]);

// ADD MATRIXES

void		ft_add_matrixes3D(double a[3][3], double b[3][3], double sum[3][3]);
void		ft_add_matrixes4D(double a[4][4], double b[4][4], double sum[4][4]);

// SCALE MATRIXES

void		ft_scale_matrix3D(double m[3][3], double lambda);
void		ft_scale_matrix4D(double m[4][4], double lambda);

// MATRIX PRODUCT

void		ft_matrix3D_product(double a[3][3], double b[3][3],
				double prod[3][3]);
void		ft_matrix4D_product(double a[4][4], double b[4][4],
				double prod[4][4]);

// MATRIX VECTOR PRODUCT

t_vector3D	ft_matrix_vector_product3D(double m[3][3], t_vector3D v);
t_vector4D	ft_matrix_vector_product4D(double m[4][4], t_vector4D v);

// MATRIX CONVERSION

void		ft_3Dto4D_matrix(double m3[3][3], double m4[4][4]);
void		ft_4Dto3D_matrix(double m4[4][4], double m3[3][3]);

// TRANSLATION MATRIX

void		ft_set_translation_matrix3D(double m[3][3], t_vector2D t);
void		ft_set_translation_matrix4D(double m[4][4], t_vector3D t);

// ROTATION MATRIX

void		ft_set_base_rotation_matrix3D(double m[3][3], double angle,
				t_axis axis);
void		ft_set_base_rotation_matrix4D(double m[4][4], double angle,
				t_axis axis);
void		ft_set_rotation_matrix3D(double m[3][3], double angle,
				t_vector3D axis);
void		ft_set_rotation_matrix4D(double m[4][4], double angle,
				t_vector3D axis);

// STRETCHING MATRIX

void		ft_set_stretching_matrix3D(double m[3][3], t_vector3D s);
void		ft_set_stretching_matrix4D(double m[4][4], t_vector4D s);

// SCALING MATRIX

void		ft_set_scaling_matrix3D(double m[3][3], double s);
void		ft_set_scaling_matrix4D(double m[4][4], double s);

// ORTHOGRAPHIC PROJECTION

t_vector3D	ft_orthographic_projection(t_vector4D v);

// AXONOMETRIC PROJECTIONS

t_vector3D	ft_axonometric_projection(t_vector4D v, double ang1, double ang2);
t_vector3D	ft_dimetric_projection(t_vector4D v, double ang1);
t_vector3D	ft_isometric_projection(t_vector4D v);

// OBLIQUE PROJECTION

t_vector3D	ft_oblique_projection(t_vector4D v, double depth, double angle);
t_vector3D	ft_cavalier_projection(t_vector4D v);
t_vector3D	ft_cabinet_projection(t_vector4D v);

// 1-POINT PERSPECTIVE PROJECTION

t_vector3D	ft_perspective_projection(t_vector4D v, t_vector4D cam_pos,
				t_vector3D cam_rot, t_ivector2D display_size);

// MATRIX DETERMINANT

// REFLEXION MATRIX

// SHEERING MATRIX

// 3D LINE EQUATION

// PLANE EQUATION

// 3D LINE / PLANE INTERSECTION

// PLANE / PLANE INTERSECTION

// CIRCLE EQUATION

// SPHERE EQUATION

// MATRIX TRACE

// TRANSPOSED MATRIX

// INVERSE MATRIX

// PRINT VECTOR

void		ft_print_vector2D(t_vector2D v, int precision);
void		ft_print_vector3D(t_vector3D v, int precision);
void		ft_print_vector4D(t_vector4D v, int precision);

// PRINT MATRIX

void		ft_print_matrix3D(double m[3][3], int precision);
void		ft_print_matrix4D(double m[4][4], int precision);

#endif
