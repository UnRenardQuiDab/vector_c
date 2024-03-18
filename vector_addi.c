/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_addi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <bwisniew@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:03:27 by lcottet           #+#    #+#             */
/*   Updated: 2024/03/18 19:26:44 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "vector.h"

int	vector_addi(t_vector *vector, void *value, size_t index)
{
	void	*new_tab;

	if (vector->len == vector->alloc)
		if (vector_realloc(vector) < 0)
			return (-1);
	ft_memcpy(vector->tab + vector->value_size * (index + 1),
		vector->tab + vector->value_size * (index),
		vector->value_size * (vector->len - index));
	ft_memcpy(vector->tab + vector->value_size * index, value,
		vector->value_size);
	vector->len++;
	return (0);
}
