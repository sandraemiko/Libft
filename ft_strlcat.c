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
	size_t	idx;
	size_t	src_index;
	size_t	len_src;
		
	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		len_src = ft_strlen(src) + size;
	else
		len_src = ft_strlen(src) + ft_strlen(dst);
	idx = ft_strlen(dst);
	src_index = 0;
	while (*(src + src_index) != '\0' && idx + 1 < size)
	{
		*(dst + idx) = *(src + src_index);
		src_index++;
		idx++;
	}
	*(dst + idx) = '\0';
	return (len_src);
}
