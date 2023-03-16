/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_lstadd_back                                         :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:42:03 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/16 17:42:03 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    if (new == NULL)
        return;
    if (*lst == NULL)
        *lst = new;
    else
    {
        ptr = ft_lstlast(*lst);
        ptr -> next = new;
    }
}   