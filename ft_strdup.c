/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strdup.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:23:04 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h" 

char    *ft_strdup(const char *s)
{
	char	*dest;
	int i;

	i = 0;
    dest = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (dest != NULL)
    {
        while (*(s + i))
        {
            *(dest + i) = *(s + i);
		    i++;
        }
    }
	*(dest + i) = '\0';
	return (dest);
}
