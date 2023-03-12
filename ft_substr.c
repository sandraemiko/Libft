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
	size_t size_str;

	sub_str = malloc((len + 1) * sizeof(char));
	size_str = ft_strlen(s);
	if (s == NULL || sub_str == NULL)
		return (NULL);
	if (len > size_str - start)
		len = size_str - start;
	if (len == 0 || start >= size_str)
	{
		*sub_str = '\0';
		return (sub_str);
	}
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
