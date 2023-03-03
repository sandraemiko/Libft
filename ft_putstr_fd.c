/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_putstr_fd.c                                          :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:37:03 by sandraemiko            #+#    #+#             */
/*   updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

void    ft_putstr_fd (char *s, int fd)
{
		while (*s != '\0')
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
}