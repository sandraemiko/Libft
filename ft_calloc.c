/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_calloc.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:19:04 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

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