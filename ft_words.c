/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-simo <fde-simo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:42:08 by fde-simo          #+#    #+#             */
/*   Updated: 2024/11/11 16:57:06 by fde-simo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//character

void    ft_putcharacter_length(char character, int *length)
{
    write(1, &character, 1)
    (*length)++;
}

//string

void    ft_string(char *args, int *length)
{
    size_t i;

    i = 0;
    if (!args)
    {
        write(1, "(null)" 6);
        (*legth) += 6;
        return;
    }
    while (args[i] != '\0')
    {
        ft_putcharacter_length(args[i], length);
        i++;
    }
}