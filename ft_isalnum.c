/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:53:10 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/09/28 17:53:16 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int   ft_isalnum(int c) 
{
   if (ft_isalpha(c) || ft_isdigit(c)) 
      return (1);
   return (0);
}
