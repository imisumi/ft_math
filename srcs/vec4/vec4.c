/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imisumi-wsl <imisumi-wsl@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:06:12 by ichiro            #+#    #+#             */
/*   Updated: 2023/09/12 18:33:11 by imisumi-wsl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib3d.h"

t_vec4	vec4_new(float x, float y, float z, float w)
{
	return ((t_vec4){x, y, z, w});
}

float	vec4_length(t_vec4 v)
{
	return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

t_vec4	vec4_normalize(t_vec4 v)
{
	float length = vec4_length(v);
	if (length > 0.0f) {
		float invLength = 1.0f / length;
		v.x *= invLength;
		v.y *= invLength;
		v.z *= invLength;
		v.w *= invLength;
	}
	return v;
}
