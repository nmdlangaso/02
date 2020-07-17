/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmdlanags <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:11:24 by nmdlanags         #+#    #+#             */
/*   Updated: 2020/07/10 17:21:30 by nmdlanags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_putchar(char n)
{
	write(1, &n, 1);

}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0' -1;
		while (++a <= '9')
		{
			b = a;
			while (++b <= '9')
			{
				c = b;
				while(++c <= '9')
				{
					if (a != '\0' || b != '1' || c != '2')
						ft_putchar(',');
					if (a != '\0' || b != '1' || c != '3')
						ft_putchar(' ');
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
				}
			}
			ft_putchar('\n');
		}
}
int main()
{
	ft_print_comb();
		return (0);

}
