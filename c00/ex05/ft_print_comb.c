#include <unistd.h>
int		ft_sort_count(int	num);
void	ft_print_char(char	a, char	b, char c);

void	ft_print_comb(void)
{
	int		count;
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 0;
	c = 0;
	count = 12;
	while (count <= 789)
	{
		c = (count % 10) + 48;
		b = ((count / 10) % 10) + 48;
		a = (((count / 10) / 10) % 10) + 48;
		if ((a != b) && (b != c) && (c != a))
		{
			if ((a < b) && (b < c))
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (count == 789)
					break ;
				write(1, ", ", 2);
			}
		}
		count++;
	}
}

void ft_sort_count(int	num)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 0;
	c = 0;

