#include <unistd.h>
#include <stdio.h>

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

int main()
{
	ft_print_alphabet();
	return (0);
}
