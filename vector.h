/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcottet <lcottet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:11:59 by bwisniew          #+#    #+#             */
/*   Updated: 2024/02/28 15:01:05 by lcottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# define VECT_SIZE 2

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
int		vector_add(t_vector *vector, void *value);
void	vector_remove(t_vector *vector, size_t index);
void	vector_init(t_vector *vector, size_t value_size);
void	vector_free(t_vector *vector);
ssize_t	vector_search(t_vector *vector, void *search_value, int (*search)(void*, void*));

#endif
