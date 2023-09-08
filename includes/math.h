/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imisumi <imisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:06:12 by ichiro            #+#    #+#             */
/*   Updated: 2023/09/08 16:48:23 by imisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

typedef struct s_vec2
{
	float		x;
	float		y;
}				t_vec2;

typedef struct s_vec3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

typedef struct s_vec4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vec4;

typedef struct s_ray
{
	t_vec3		origin;
	t_vec3		direction;
}				t_ray;

typedef struct s_mat4
{
	float		m[4][4];
}				t_mat4;

typedef struct s_quaternion
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_quat;

/* ************************************************************************** */
/*                                    vec2                                    */
/* ************************************************************************** */

t_vec2		vec2_add(t_vec2 a, t_vec2 b);
t_vec2		vec2_addf(t_vec2 a, float b);
t_vec2		vec2_sub(t_vec2 a, t_vec2 b);
t_vec2		vec2_subf(t_vec2 a, float b);
t_vec2		vec2_mul(t_vec2 a, t_vec2 b);
t_vec2		vec2_mulf(t_vec2 a, float b);
t_vec2		vec2_div(t_vec2 a, t_vec2 b);
t_vec2		vec2_divf(t_vec2 a, float b);

float		vec2_dot(t_vec2 a, t_vec2 b);
float		vec2_length(t_vec2 a);
float		vec2_length2(t_vec2 a);
t_vec2		vec2_normalize(t_vec2 a);
t_vec2		vec2_lerp(t_vec2 a, t_vec2 b, float t);
t_vec2		vec2_reflect(t_vec2 a, t_vec2 b);
t_vec2		vec2_rotate(t_vec2 a, float angle);
t_vec2		vec2_rotate_around(t_vec2 a, t_vec2 b, float angle);
t_vec2		vec2_min(t_vec2 a, t_vec2 b);
t_vec2		vec2_max(t_vec2 a, t_vec2 b);
t_vec2		vec2_clamp(t_vec2 a, t_vec2 min, t_vec2 max);
t_vec2		vec2_clampf(t_vec2 a, float min, float max);
t_vec2		vec2_smoothstep(t_vec2 a, t_vec2 b, float t);
t_vec2		vec2_smoothstepf(t_vec2 a, float b, float t);

/* ************************************************************************** */
/*                                    vec3                                    */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                    mat4                                    */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                    quat                                    */
/* ************************************************************************** */

#endif
