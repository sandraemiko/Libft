/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_memchr.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:07:03 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char	*s_aux;

	i = 0;
	s_aux = (unsigned char *) s;
	c = (unsigned char) c;
	while (*(s_aux + i) != c && i < n)
		i++;
	if (i == n)
		return (NULL);
	return ((void*)(s_aux + i));
}