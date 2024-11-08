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
	}
}