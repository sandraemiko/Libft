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

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return ((char *)(s + i));
}