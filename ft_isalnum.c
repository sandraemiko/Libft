/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_isalnum.c                                                             */
/*                                                                            */
/* Recebe um argumento inteiro, cujo valor seja um caractere (ou seja, possa  */
/* ser representado como um unsigned char) ou o valor EOF. Retorna 1          */
/* caso o caractere seja alfanumérico ou 0 caso contrário.                    */                                                                      
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
   if (!ft_isdigit(c))
   {
        if (!ft_isalpha(c))
        {
            return (0);
        }
   }
   return (1);
}