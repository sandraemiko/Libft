/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_atoi.c                                               :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: sandraemiko<sandraemiko@prof.educacao.sp.gov.br> +#+  +:+     +#+         */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:19:04 by sandraemiko            #+#    #+#             */
/*                                                         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

int	ft_atoi (const char *str)
{
	int sign;
	int value;

	sign = 1;
	value = 0;
	while ((*str <= '\t' && *str >= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		value = (value * 10) + ((*str++) - '0');
	return (sign * value);
}