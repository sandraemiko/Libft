/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_substr.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:09:04 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	char *sub_str;
	
	sub_str = malloc((len + 1) * sizeof(char));
	if (s == NULL || sub_str == NULL) 
		return (NULL);
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start; 
	if (len == 0 || start >= ft_strlen(s))
	{
		*sub_str = '\0';
		return (sub_str); 
	}
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}