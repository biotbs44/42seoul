#include <unistd.h>

int	main(void)
{
	char	a;
	
	a = 0;
	write(1, &a, 1);
	return (0);
}
