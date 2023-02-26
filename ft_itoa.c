/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_itoa.c                                               :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>  +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:13:03 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

static int ft_contdig(int n)
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

static void	ft_strrev(char *str, int n, int len)
{
	int num;

	if (n < 0)
	{
		num = - n;
		*str = '-';
	}
	else
		num = n;
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