/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strdup.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:23:04 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

char	*ft_strdup(const char *s)
{
	char	*dest;

    dest = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dest != NULL)
		ft_strlcpy(dest, s, ft_strlen(s) + 1);
	return (dest);
}