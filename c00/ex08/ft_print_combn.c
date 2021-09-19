#include <unistd.h>
void	ft_print_combn_plus(char	*str, int	n);
void	ft_print_combn_prior(char	*str, int	n);
void	ft_print_combn_write(char	*str, int	n);

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
			str[idx++] = '0';
	}
	ft_print_combn_plus(str, n);
}

void	ft_print_combn_plus(char	*str, int	n)
{
	int	last_idx;
	int	first_idx;

	last_idx = n - 1;
	first_idx = 0;
	while (1)
	{
		while (last_idx >= 0)
		{
			if (str[last_idx] != '9')
			{
				str[last_idx]++;
				break ;
			}
			else
			{
				str[last_idx] = '0';
				last_idx--;
			}
		}
		ft_print_combn_prior(str, n);
		if(str[0] == '9')
			break ;
	}
}

void	ft_print_combn_prior(char	*str, int	n)
{
	int	first_idx;
	int	last_idx;
	int	flag;

	flag = 0;
	first_idx = 0;
	last_idx = n - 1;
	while (first_idx < n - 1)
	{
		if (str[first_idx] > str[first_idx + 1])
		{
			flag = 1;
			break ;
		}
	}
	if (flag == 0)
	{
		ft_print_combn_write(str, n);
	}
}

void	ft_print_combn_write(char	*str, int	n)
{
	int	first_idx;

	first_idx = 0;
	while (first_idx < n)
	{
		write(1, &str[first_idx++], 1);
	}
	if (str[0] == ((char) n) + 48)
		write(1, "\n", 1);
	else
		write(1, ", ", 2);
}
