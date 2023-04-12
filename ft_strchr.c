/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strchr.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:13:03 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h" 

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0') 
	{
		if (*str == (unsigned char)c) 
			return ((char *)str); 
		str++;
	}
	if ((unsigned char)c == '\0') 
		return ((char *)str);
	return (NULL);
}