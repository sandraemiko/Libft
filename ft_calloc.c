/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:52:56 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/04/26 15:10:39 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *pointer;

	pointer = malloc (nmemb * size); 
	if (!pointer)
		return (NULL);
	ft_bzero (pointer, (nmemb * size));
	return (pointer); 
}
