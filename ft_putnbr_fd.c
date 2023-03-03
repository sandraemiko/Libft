/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_putnbr_fd.c                                          :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:07:03 by sandraemiko            #+#    #+#             */
/*   updated: 2023/02/27 21:22:10 by sandraemiko           ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"

int ft_abs (int n)
{
	int result;

	if (n < 0)
		result = -n;
	else
		result = n;
	return (result);
}

int ft_dig(int n)
{
	int digit;

	digit = 1;
	while (n/10 != 0)
	{
		digit++;
		n /=10;
	}
	return (digit);
}

int ft_powten(int exp)
{
	int result;

	result = 1;
	while ((exp--) != 0)
		result = result * 10; 
	return (result);
}

void ft_putnbr_fd(int n, int fd)
{
	int exp;
	int number;
	int ten;
	int i;

	if(n < 0)
		ft_putchar_fd('-',fd);
	number = ft_abs(n);
	exp = ft_dig(n);
	ten = ft_powten(exp - 1);
	while(ten > 0)
	{
		i = (number / ten) + '0';
		write(fd, &i, 1);
		number = number % ten;
		ten /= 10;
	}
}

