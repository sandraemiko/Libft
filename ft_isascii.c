/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_iascii.c                                                              */
/*                                                                            */
/* A função isascii() testa um caractere ASCII (no intervalo de 0 a 127).     */                                                                      
/* Retorna 1 se for um caractere ASCII; caso contrário, zero.                 */                                                          */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
    {
		return (1);
    }
	return (0);
}