/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:54:43 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/09/26 11:15:48 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        ptr->next = new;
    }
} 
