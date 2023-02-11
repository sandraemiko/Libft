/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_isdigit.c                                                             */
/*                                                                            */
/* Recebe: um único argumento (caractere) que será convertido para inteiro.   */
/* Mesmo que isdigit() receba um inteiro como argumento, o caractere é passado*/
/* para a função. Internamente, o caractere é convertido em seu valor ASCII   */
/* para a verificação. Retorna o valor 1 quando o caractere recebido é um     */
/* dígito de 0 a 9 ou 0 caso contrário.                                       */                                                                      
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
    {
		return (1);
    }
	return (0);
}