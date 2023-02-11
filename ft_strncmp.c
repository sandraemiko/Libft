/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*By:sandraemiko<sandraemiko@prof.educacao.sp.gov.br>+#+  +:+     +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:31:03 by sandraemiko       #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp (const char* s1, const char* s2, size_t n)
{
	size_t	i;
	i = 0;
    
	while ((*(s1 + i) == *(s2 + i)) && i < n)
	{
		if (*(s1 + i) == '\0')
        {
            return (0);
        }
        i++;
	}
    if (n == i)
    {
        return (0);
    }
	return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
}
