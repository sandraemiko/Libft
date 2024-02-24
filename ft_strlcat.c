/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strlcat                                              :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:13:03 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t i;

	len_dst = 0;
	i = 0;
	while (len_dst < size && *(dst + len_dst) != '\0') 
		len_dst++;
	if (len_dst < size)
	{
		while ((size - len_dst)> (i + 1) && *(src + i))
		{
			*((dst + len_dst)+ i) = *(src + i); 
			i++;
		}
		*((dst + len_dst) + i) = '\0';
	}
	return (ft_strlen(src) + len_dst); 
} 
