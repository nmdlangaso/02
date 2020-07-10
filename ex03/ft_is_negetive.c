/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negetive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmdlanagso <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:19:28 by nmdlanags         #+#    #+#             */
/*   Updated: 2020/07/10 13:50:26 by nmdlanags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char n)
{
 	write(1, &n, 1);

}
	void ft_is_negative(int n)
	{
	if(n<0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	
	}
     

     
	}
int main()
{
	ft_is_negative(1 );
		return (0);





}
