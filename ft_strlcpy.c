/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_strlcpy                                             :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:55:03 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (size> (i + 1) && *(src + i))
	{
		*(dst + i) = *(src + i); 
		i++;
	}
	*(dst + i) = '\0';
	return (ft_strlen(src));
}
