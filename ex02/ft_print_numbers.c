/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmdlanagso <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:14:57 by nmdlanags         #+#    #+#             */
/*   Updated: 2020/07/10 13:08:48 by nmdlanags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{

	write(1, &c, 1);

}
void ft_print_numbers(void)
{
    	 char n;
		char t;

		 n = '1';
		 t = '9';

	while ( n <= t )
		{

	ft_putchar(n);
		n++;

		}
}
	int main()
{
	ft_print_numbers();
	return (0);

}
