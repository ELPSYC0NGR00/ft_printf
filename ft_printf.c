/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-simo <fde-simo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:34:57 by fde-simo          #+#    #+#             */
/*   Updated: 2024/11/08 14:41:41 by fde-simo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"../includes/ft_printd.h"

static void	ft_printf_checker(char s, va_list *args, int *len, int *i)
{
	if (s == 'c')
		ft_putcharacter_length(va_arg(*args, int), len);
}

int ft_printf(char const *string, ...)
{
    va_list	args;		//Se declara una lista para manejar los argumentos variables
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, string);		//Inicializa la lista con el ultimo argumento fijo (string)
	while (string[i] != '\0')
	{
		if (string[i] == '%')	//compruebo si hay un '%'
		{
			i++;		//muevo al siguiente caracter
			ft_printf_check(string[i], &args, &length, &i); //llamo a la funcion "ft_printf_check"
			i++;
		}
		else
		{
			ft_putcharacter_length((char)string[i], &length);
			i++;
		}
		va_end(args);
		return(length);
	}
}