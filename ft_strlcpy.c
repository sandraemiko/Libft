/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_strlcpy                                             :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:31:03 by sandraemiko           #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if ((size-1)> i && *(src + 1))
	{
		*(dst + i) = *(src +i);
		i++;
	}
	*(dst + i) = '\0';
	return (ft_strlen(src)); 

}