/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_lstlast                                             :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:42:03 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/16 17:42:03 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst == NULL)
        lst = lst -> next;
    return (lst);
}