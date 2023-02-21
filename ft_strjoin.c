/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strjoin.c                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:09:04 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t size_s1;
	size_t size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	str = (char*)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (str != NULL)
	{
		ft_strlcpy(str, s1, size_s1 + 1));
		ft_strlcat(str, s2, size_s1 + size_s2 + 1));
	}
	return (str);
}