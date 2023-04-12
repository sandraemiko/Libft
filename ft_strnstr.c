/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 03:18:26 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/04/12 01:51:20 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index_big;
	size_t	index_little;
	size_t	index;

	index_big = 0;
	if (*little == '\0')
		return ((char*)big);
	while (len > index_big && *(big + index_big) != '\0')
	{
		index = index_big;
		index_little = 0;
		while (*(char*)(big + index_big) == *(char*)(little + index_little))
		{
			if (index_big++ == len && *(char*)(little + index_little) != '\0')
				return (NULL);
			else if (*(char*)(little + 1 + index_little++) == '\0')
				return ((char*)(big + index));
		}
		index_big = index;
		index_big++; 
	}
	return (NULL);
}