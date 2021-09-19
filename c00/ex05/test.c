#include <unistd.h>

int	main(void)
{
	char	str[3];
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i < 3)
	{
		str[i] = i + 48;
		i++;
	}
	while (j < 3)
	{
		write(1, &str[j], 1);
		j++;
	}	
	return (0);
}
