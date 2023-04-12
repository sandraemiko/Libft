/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strtrim.c                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:09:04 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h" 

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len_s1;
	
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) != NULL && *s1 != '\0')
	len_s1 = ft_strlen(s1);
	while (ft_strchr(set, s1[len_s1]) != NULL && len_s1 != 0)
	    len_s1--;
	return (ft_substr(s1, 0, (len_s1 + 1)));
}