/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strteri.c                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:07:03 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h" 

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;// cria uma variável do tipo unsigned int

	i = 0;// atribui o valor 0
	while (*(s + i) != '\0')// enquanto não chegar na terminação de s
	{
		(*f)(i, (s + i));// aplica a função em cada caracter, passando o indice como argumento
		i++;
	}
}