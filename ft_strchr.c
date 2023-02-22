/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strchr.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:13:03 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}