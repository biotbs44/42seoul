#include "ft_print_comb.h"
#include <unistd.h>

int main(void)
{
	int		b;
	b = 789;
	char	c1;
	c1 = '0';
	char	c2;
	c2 = '1';
	char	c3;
	c3 = '2';

	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	return (0);
}
