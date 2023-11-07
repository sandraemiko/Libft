/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:25:09 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/09/26 11:19:00 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_lst;
    t_list *element;

    if (lst == NULL)
        return (NULL);
    new_lst = NULL;
    while(lst != NULL)
    {
        element = ft_lstnew (f(lst->content));
        if (element == NULL)
        {
            ft_lstclear(&new_lst,del);
            return (NULL);
        }
        ft_lstadd_back (&new_lst, element);
        lst = lst->next;
    }
    element = NULL;
    return(new_lst);
}
