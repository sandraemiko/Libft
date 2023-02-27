/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_memcpy.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:16:04 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while ((n--)> 0)
		*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
	return (dest);
}
