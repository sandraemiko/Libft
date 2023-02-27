/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strrchr.c                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:07:03 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int	i;

	i = ft_strlen(s);
	while (i > 0 && *(s + i) != (char)c)
    	i--;
	if (i == 0 && (char)c != '0')
        return (NULL);
	return ((char*)(s + i));
}