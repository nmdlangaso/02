

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmdlanags <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:20:38 by nmdlanags         #+#    #+#             */
/*   Updated: 2020/07/17 14:20:38 by nmdlanags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char n)

{
	write(1, &n, 1);
}
void ft_print_alphabet(void)
{
 	char o;
	char t;

	o = 'a';
	t = 'z';
	
	while ( o <= t)
	{
 		ft_putchar(o);
		o++;
	}
}

