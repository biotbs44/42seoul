#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	num;

	num = 1234;

	while (num <= 56789)
	{
		ft_print_combn(num);
		num++;
	}
	return (0);
}

void	ft_print_combn(num)
{
	if(

