/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algebra.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:40 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/15 16:13:53 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGEBRA_H
# define FT_ALGEBRA_H

typedef enum e_axis
{
	X_AXIS = 0,
	Y_AXIS = 1,
	Z_AXIS = 2,
}			t_axis;

typedef struct s_ivector2d
{
	int		x;
	int		y;
}			t_ivector2d;

typedef struct s_vector2d
{
	double	x;
	double	y;
}			t_vector2d;

typedef struct s_vector3d
{
	double	x;
	double	y;
	double	z;
}			t_vector3d;

typedef struct s_vector4d
{
	double	x;
	double	y;
	double	z;
	double	w;
}			t_vector4d;

// ADD

t_vector2d	ft_add_vectors2d(t_vector2d a, t_vector2d b);
t_vector3d	ft_add_vectors3d(t_vector3d a, t_vector3d b);
t_vector4d	ft_add_vectors4d(t_vector4d a, t_vector4d b);

// SUB

t_vector2d	ft_sub_vectors2d(t_vector2d a, t_vector2d b);
t_vector3d	ft_sub_vectors3d(t_vector3d a, t_vector3d b);
t_vector4d	ft_sub_vectors4d(t_vector4d a, t_vector4d b);

// SCALE

t_vector2d	ft_scale_vector2d(int lambda, t_vector2d a);
t_vector3d	ft_scale_vector3d(int lambda, t_vector3d a);
t_vector4d	ft_scale_vector4d(int lambda, t_vector4d a);

// NORM

double		ft_vector2d_norm(t_vector2d a);
double		ft_vector3d_norm(t_vector3d a);

double		ft_vector2d_square_norm(t_vector2d a);
double		ft_vector3d_square_norm(t_vector3d a);

// NORMALIZE

t_vector2d	ft_normalize_vector2d(t_vector2d a);
t_vector3d	ft_normalize_vector3d(t_vector3d a);

// DOT PRODUCT

double		ft_dot_vectors2d(t_vector2d a, t_vector2d b);
double		ft_dot_vectors3d(t_vector3d a, t_vector3d b);

// CROSS PRODUCT

t_vector3d	ft_cross_vectors3d(t_vector3d a, t_vector3d b);

// DISTANCE BETWEEN TWO POINTS

double		ft_distance2d(t_vector2d a, t_vector2d b);
double		ft_distance3d(t_vector3d a, t_vector3d b);

// MIDDLE OF TWO POINTS

t_vector2d	ft_middle2d(t_vector2d a, t_vector2d b);
t_vector3d	ft_middle3d(t_vector3d a, t_vector3d b);

// LINEAR INTERPOLATION

t_vector2d	ft_lerp2d(t_vector2d a, t_vector2d b, double lambda);
t_vector3d	ft_lerp3d(t_vector3d a, t_vector3d b, double lambda);

// ANGLES BETWEEN VECTORS

double		ft_vectors2d_angle(t_vector2d a, t_vector2d b);
double		ft_vectors3d_angle(t_vector3d a, t_vector3d b);

// ANGLE CONVERSION

double		ft_rad_to_deg(double rad);
double		ft_deg_to_rad(double deg);

// CHECK ORTHOGONALITY

int			ft_are_vectors2d_ortho(t_vector2d a, t_vector2d b);
int			ft_are_vectors3d_ortho(t_vector3d a, t_vector3d b);

// CHECK COLINEARITY

int			ft_are_vectors2d_col(t_vector2d a, t_vector2d b);
int			ft_are_vectors3d_col(t_vector3d a, t_vector3d b);

// 2d LINE EQUATION

t_vector3d	ft_line2d_equation(t_vector2d a, t_vector2d b);

// 2d LINE DIRECTION VECTOR

t_vector2d	ft_direction_vector2d(t_vector3d line);

// 2d LINES INTERSECTION

t_vector2d	ft_lines2d_intersection(t_vector3d l1, t_vector3d l2);

// VECTOR CONVERSION

t_vector2d	ft_3dto2d_vector(t_vector3d v3);
t_vector3d	ft_4dto3d_vector(t_vector4d v4);
t_vector4d	ft_3dto4d_vector(t_vector3d v3);
t_vector3d	ft_2dto3d_vector(t_vector2d v2);
t_vector2d	ft_i2dto2d_vector(t_ivector2d vi2);

// SET VECTOR

t_ivector2d	ft_set_ivector2d(int x, int y);
t_vector2d	ft_set_vector2d(double x, double y);
t_vector3d	ft_set_vector3d(double x, double y, double z);
t_vector4d	ft_set_vector4d(double x, double y, double z, double w);

// INIT VECTOR

t_vector2d	ft_init_vector2d(double value);
t_vector3d	ft_init_vector3d(double value);
t_vector4d	ft_init_vector4d(double value);

// ROTATE VECTOR

t_vector4d	ft_rotate_vector4d(t_vector4d v, t_vector3d rotator);
t_vector3d	ft_rotate_vector3d(t_vector3d v, t_vector2d rotator);

// TRANSLATE VECTOR

t_vector3d	ft_translate_vector3d(t_vector3d v, t_vector2d translator);
t_vector4d	ft_translate_vector4d(t_vector4d v, t_vector3d translator);

// GET BASE VECTOR

t_vector2d	ft_get_base_vector2d(t_axis axis);
t_vector3d	ft_get_base_vector3d(t_axis axis);
t_vector4d	ft_get_base_vector4d(t_axis axis);

// SET NULL MATRIX

void		ft_set_null_matrix2d(double m[2][2]);
void		ft_set_null_matrix3d(double m[3][3]);
void		ft_set_null_matrix4d(double m[4][4]);

// ADD MATRIXES

void		ft_add_matrixes3d(double a[3][3], double b[3][3], double sum[3][3]);
void		ft_add_matrixes4d(double a[4][4], double b[4][4], double sum[4][4]);

// SCALE MATRIXES

void		ft_scale_matrix3d(double m[3][3], double lambda);
void		ft_scale_matrix4d(double m[4][4], double lambda);

// MATRIX PRODUCT

void		ft_matrix3d_product(double a[3][3], double b[3][3],
				double prod[3][3]);
void		ft_matrix4d_product(double a[4][4], double b[4][4],
				double prod[4][4]);

// MATRIX VECTOR PRODUCT

t_vector3d	ft_matrix_vector_product3d(double m[3][3], t_vector3d v);
t_vector4d	ft_matrix_vector_product4d(double m[4][4], t_vector4d v);

// MATRIX CONVERSION

void		ft_3dto4d_matrix(double m3[3][3], double m4[4][4]);
void		ft_4dto3d_matrix(double m4[4][4], double m3[3][3]);

// TRANSLATION MATRIX

void		ft_set_translation_matrix3d(double m[3][3], t_vector2d t);
void		ft_set_translation_matrix4d(double m[4][4], t_vector3d t);

// ROTATION MATRIX

void		ft_set_base_rotation_matrix3d(double m[3][3], double angle,
				t_axis axis);
void		ft_set_base_rotation_matrix4d(double m[4][4], double angle,
				t_axis axis);
void		ft_set_rotation_matrix3d(double m[3][3], double angle,
				t_vector3d axis);
void		ft_set_rotation_matrix4d(double m[4][4], double angle,
				t_vector3d axis);

// STRETCHING MATRIX

void		ft_set_stretching_matrix3d(double m[3][3], t_vector3d s);
void		ft_set_stretching_matrix4d(double m[4][4], t_vector4d s);

// SCALING MATRIX

void		ft_set_scaling_matrix3d(double m[3][3], double s);
void		ft_set_scaling_matrix4d(double m[4][4], double s);

// ORTHOGRAPHIC PROJECTION

t_vector3d	ft_orthographic_projection(t_vector4d v);

// AXONOMETRIC PROJECTIONS

t_vector3d	ft_axonometric_projection(t_vector4d v, double ang1, double ang2);
t_vector3d	ft_dimetric_projection(t_vector4d v, double ang1);
t_vector3d	ft_isometric_projection(t_vector4d v);

// OBLIQUE PROJECTION

t_vector3d	ft_oblique_projection(t_vector4d v, double depth, double angle);
t_vector3d	ft_cavalier_projection(t_vector4d v);
t_vector3d	ft_cabinet_projection(t_vector4d v);

// PLANE PROJECTION

t_vector3d	ft_plane_projection(t_vector4d v, t_axis normal);

// 1-POINT PERSPECTIVE PROJECTION

t_vector3d	ft_perspective_projection(t_vector4d v, t_vector4d cam_pos,
				t_vector3d cam_rot, t_ivector2d display_size);

// MATRIX DETERMINANT

// REFLEXION MATRIX

// SHEERING MATRIX

// 3d LINE EQUATION

// PLANE EQUATION

// 3d LINE / PLANE INTERSECTION

// PLANE / PLANE INTERSECTION

// CIRCLE EQUATION

// SPHERE EQUATION

// MATRIX TRACE

// TRANSPOSED MATRIX

// INVERSE MATRIX

// PRINT VECTOR

void		ft_print_vector2d(t_vector2d v, int precision);
void		ft_print_vector3d(t_vector3d v, int precision);
void		ft_print_vector4d(t_vector4d v, int precision);

// PRINT MATRIX

void		ft_print_matrix3d(double m[3][3], int precision);
void		ft_print_matrix4d(double m[4][4], int precision);

#endif
