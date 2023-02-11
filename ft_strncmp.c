/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strncmp.c                                                             */
/*                                                                            */
/* Compara até n caracteres da string  s1 com os da string s2 .               */ 
/* Esta função começa comparando o primeiro caractere de cada string. Se eles */
/* forem iguais entre si, ele continua com os pares seguintes até que os      */
/* caracteres sejam diferentes, até que um caractere nulo de terminação       */
/* seja alcançado ou até que n caracteres correspondam em ambas as            */
/* strings, o que acontecer primeiro.                                         */                                                                      
/*                                                                            */
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
