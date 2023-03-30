/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_memchr.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:13:03 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"  

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (n > i)
	{
		if (*(unsigned char *)(str + i) == c)
			return ((void *) (str + i));
		i++;
	}
	return (NULL);
}