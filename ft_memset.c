/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_memset                                               :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:03:03 by sandraemiko            #+#    #+#             */
/*   updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *t;

    t = (unsigned char *)s;
    while((n--) > 0)
         *(t ++) = (unsigned char)c;
    return (t);
}