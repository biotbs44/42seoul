#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[13] = {'\0'};
	int		idx;

	idx = 0;
	while (nb != 0)
	{
		str[idx++] = (nb % 10) + 48;
		nb /= 10;
	}
	while (idx >= 1)
	{
		idx--;
		write(1, &str[idx], 1);
	}
}
