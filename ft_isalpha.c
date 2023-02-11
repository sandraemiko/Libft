/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_isalpha.c                                                             */
/*                                                                            */
/* Recebe um único argumento (caractere) que será convertido para inteiro.    */
/* Mesmo que isalpha() receba um inteiro como argumento, o caractere é        */
/*passado para a função. Internamente, o caractere é convertido em seu valor  */
/*ASCII para a verificação. Retorna: 1 caso seja uma letra do alfabeto        */
/* maiúscula e 0 caso não esteja no alfabeto.                                 */                                                                      
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122))
        {
		return (1);
        }
	return (0);
}