/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <bwisniew@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:11:59 by bwisniew          #+#    #+#             */
/*   Updated: 2024/02/28 14:54:22 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# define VECT_SIZE 100

# include <stddef.h>
# include <unistd.h>

typedef struct s_vector
{
	void	*tab;
	size_t	len;
	size_t	alloc;
	size_t	value_size;
}	t_vector;

int		vector_realloc(t_vector *vector);
void	vector_init(t_vector *vector, size_t value_size);
void	vector_free(t_vector *vector);
ssize_t	vector_search(t_vector *vector, void *search_value, int search(void*, void*));

#endif