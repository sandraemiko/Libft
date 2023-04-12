/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:54:34 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/04/11 23:58:21 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lendigt(int n)
{
	int	len;
	
	len =1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int ft_abs (int n)
{
	int result;

	if (n < 0)
		result = -n;
	else
		result = n;
	return (result);
}

static void ft_converter (unsigned int num, int len, char* ptr)
{
	*(ptr + len) = '\0';
	while ((len--) != 0)
	{
		*(ptr + len) = num % 10 + '0';
		num /= 10;
	}
}


char		*ft_itoa(int n)
{
	int	len;
	unsigned int	num;
	char			*ptr;

	num = ft_abs(n);
	len = ft_lendigt(n);
	ptr = (char*)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_converter(num, len, ptr);
	if (n < 0)
		*ptr = '-';
	return (ptr);
}