/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_toupper.c                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:31:03 by sandraemiko            #+#    #+#             */
/*   Updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122) // Verifica o caracter c esta na faixa numerica correspondente as letras minusculas
		return (c - ' '); // subtrai 32 (espaço) de c , que é a diferença entre as letras minusculas e maiusculas
	return (c);// retorna o valor convertido ou o proprio valor de ela não for caracter minusculo
}
