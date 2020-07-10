/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmdlanags <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:41:09 by nmdlanags         #+#    #+#             */
/*   Updated: 2020/07/10 11:48:57 by nmdlanags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char n)
{
	write(1, &n, 1); 

}
void ft_print_reverse_alphabet(void)
{
	char t;
	char o;
	
	t = 'z';
	o = 'a';

	 while ( t >= o)
	{
		ft_putchar(t);
		t--;
	
	}	
}
