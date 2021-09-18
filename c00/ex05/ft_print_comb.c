#include <unistd.h>

void	ft_print_comb(void)
{
	int	count;
	char	a;
	char	b;
	char	c;

	count = 12;
	while (count <= 789)
	{
		c = (count % 10) + 48;
		b = ((count / 10) % 10) + 48;
		a = (((count / 10) / 10) % 10) + 48;
		
		if((a != b) && (b != c) && (c != a))
		{
			if((a < b) && (b < c))
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if(count == 789)
					break;
				write(1, ", ", 2);
			}
		}
		count++;
	}
}	
