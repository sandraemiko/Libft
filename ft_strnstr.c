/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 03:18:26 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/03/21 03:41:39 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		position;
	size_t	i;

	position = ft_strlen((char *)little);
	if (position == 0)
		return ((char *)big);
	i = 0;
	while (*(big + i)!= '\0' && (len - i) >= position)
	{
		if (ft_strncmp((big + i), little, position) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}