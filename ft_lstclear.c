/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_lstclear                                            :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:23:03 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/16 17:23:03 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *next;

    if (*lst == NULL)
        return;
    while(*lst != NULL)
    {
        next = (*lst)->next;
        ft_lstdelone(*lst,del);
        *lst =next;
    }
}
