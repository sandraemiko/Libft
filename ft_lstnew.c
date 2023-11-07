/* ****************************************************************************** */
/*                                                                                */
/*                                                            :::      ::::::::   */
/*   ft_lstnew.c                                            :+:      :+:    :+:   */
/*                                                        +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                    +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:26:10 by sandraemiko           #+#    #+#             */
/*   Updated: 2023/02/13 22:26:10 by sandraemiko          ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

#include "libft.h" 

t_list *ft_lstnew(void *content)
{
	t_list *new_element;

	new_element = (t_list *) malloc(sizeof(t_list));
	if (new_element == NULL)
		return (NULL);
	new_element -> content = content;
	new_element -> next = NULL;
	return(new_element);
}
