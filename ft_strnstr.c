/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strnstr.c                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:34:10 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		position;
	size_t	i;

	position = ft_strlen((char *)little);
	if (position == 0)
		return ((char *)big);
	i = 0;
	while (*(big + i)!= '\0' && (len - i) >= position)
	{
		if (ft_strncmp((big + i), little, position) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}