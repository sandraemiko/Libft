/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:54:34 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/03/23 16:05:31 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contdig(int n)
{
	int cont;

	cont =  0;
	if (n <= 0)
		cont = 1;
	while (n != 0)
	{
		cont++;
		n = n/10;
	}
	return (cont);
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

static void	ft_strrev(char *str, int n, int len)
{
	int num;

	if (n < 0)
		*str = '-';
	num = ft_abs (n);
	*(str + len) = '\0';
	while ((len--) != 0)
	{
		*(str + len) = num % 10 + '0';
		num /= 10;
	}
}

char *ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	len = ft_contdig(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strrev(str, n, len);
	return (str);
}