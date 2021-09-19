#include <unistd.h>

void	ft_write_combn(char	*str, int	n);
void	ft_plus_combn(char	*str, int	n);

void	ft_print_combn(int	n)
{
	char	str[10];
	int		idx;
	
	idx = 0;
	while (idx < 10)
	{
		if (idx >= n)
			str[idx++] = '\0';
		else
			str[idx++] = 48;

	}
	while (1)
	{
		while (n >= 0)
		{
			if(str[n - 1] != 9)
			{
				str[n - 1]++;
				break ;
			}
			else
			{
				str[n - 1] = 0;
				n--;
			}
		}
	}
}

void	ft_plus_combn(char	*str, int	n)
{
	int	last_idx;
	int	first_idx;
	
	
