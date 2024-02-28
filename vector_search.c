/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <bwisniew@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:45:26 by bwisniew          #+#    #+#             */
/*   Updated: 2024/02/28 14:54:11 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

ssize_t	vector_search(t_vector *vector, void *search_value, int search(void*, void*))
{
	size_t	i;

	i = 0;
	while (i < vector->len)
	{
		if (search(vector->tab + vector->value_size * i, search_value))
			return (i);
		i++;
	}
	return (-1);
}
