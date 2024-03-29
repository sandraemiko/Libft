/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 03:18:35 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/04/26 09:55:28 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int	end;

	end = ft_strlen(s) + 1;
	while ((end--) > 0) 
	{
		if(*(s + end) == (unsigned char)c)
			return ((char *)(s + end));  
	}
	return (NULL);
}
