/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_lstiter                                             :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:23:03 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/16 17:23:03 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *ptr; 

    if(lst == NULL)
        return;
    ptr = lst;
    while (ptr != NULL)
    {
        f(ptr->content);
        ptr = ptr ->next;
    }
}
