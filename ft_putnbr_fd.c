/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandraemiko <sandraemiko@prof.educacao.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:56:33 by sandraemiko       #+#    #+#             */
/*   Updated: 2023/04/12 00:18:07 by sandraemiko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int num;
	unsigned int c;
	unsigned int digit;
	
	if (n < 0)
	{
		write(fd, "-", 1);
		num = (unsigned int)(n * -1);
	}
	else
		num = (unsigned int)n;
	if (num >= 10)
	{
		c = num/10;
		ft_putnbr_fd(c, fd);
	}
	digit = num % 10 + '0';
	write(fd, &digit, 1);
}