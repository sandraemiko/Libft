/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_split.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:13:03 by sandraemiko            #+#    #+#             */
/*   updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h" 

static int	ft_listlen(char const *s, char c)
{
	int	len;


	len = 0;
	while (*(s) != '\0')
	{
		if (*(s) == c)
			s++;
		else
		{
			len++;
			while (*(s) != '\0' && *(s) != c)
				s++;
		}
	}
	return (len);
}



char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char **list_pointer; 

	list_pointer = (char**)malloc(sizeof(char*) * (ft_listlen(s, c) + 1));
	if ((list_pointer == NULL) || (s == NULL))
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		i = 0;
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
		if (i != 0)
		{
			list_pointer[j++] = ft_substr(s, 0, i-1);
			s += i;
		}
		else
			s++;
	}
	list_pointer[j] = NULL;
	return (list_pointer);
}