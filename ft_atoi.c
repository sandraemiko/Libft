/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:52:17 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/04/26 11:56:00 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_escape(int i)
{
	if (i == ' ' || i == '\t' || i == '\n' ||  i== '\v' || i == '\f' || i == '\r')     
		return (1);                               
	else
		return (0);
} 

int	ft_atoi(const char *str)
{
	int sign; 
	int value;

	sign = 1;
	value = 0;
	while (ft_escape(*str)) 
		str++; 
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
		value = (value * 10) + (int)((*str++) - '0');
	return (sign * value);
}
