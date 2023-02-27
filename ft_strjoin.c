/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strjoin.c                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:09:04 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h" 

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	
	str = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str != NULL)
	{
		ft_strlcpy(str, s1, ft_strlen(s1) + 1);
		ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	}
	return (str);
}