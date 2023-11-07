/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_lstsize                                             :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:23:03 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/16 17:23:03 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
   int i;
   t_list *ptr;

   i = 0;
   ptr = lst;
   while (ptr != NULL)
   {
        i++;
        ptr = ptr -> next;
   } 
   return (i);
}
