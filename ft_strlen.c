/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_strlen                                               :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:31:03 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;//variável que guardará o comprimento da string

	i = 0;// inicia por 0, que o elem.netro da adição, caso não tenha nehum caracter , além do terminador da string , caracter nulo
	while (*(s + i) != '\0')// Enquando não chegar no fim da string 
		i++;//acresce uma unidade correspondente ao caracter que esta na posição i
    return (i);
}