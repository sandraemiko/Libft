/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_lstmap                                              :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:23:03 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/16 17:23:03 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_lst *new_lst;
    t_lst *element;

    if (lst == NULL)
        return (NULL);
    new_lst = NULL;
    while(lst != NULL)
    {
        element = ft_lstnew (f(lst -> content));
        if (element == NULL)
        {
            ft_lstclear(&new_lst,del);
            return (NULL);
        }
        ft_lstadd_back (&new_lst, element);
        lst = lst ->next;
    }
    element = NULL;
    return (new_lst);
}
