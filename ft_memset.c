/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_memset                                               :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:03:03 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

void	*ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *t;

    i = 0;
    t = (unsigned char *)s;
    while(n > i)
         *(t + i++) = (unsigned char)c;
    return (t);
}