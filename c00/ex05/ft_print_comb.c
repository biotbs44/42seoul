#include <unistd.h>

void	ft_print_comb(void)
{
	int	count;
	count = 12;
	char	fir_num;
	char	sec_num;
	char	thi_num;
	
	while(count <= 789)
	{
		fir_num = 'count % 10';
		sec_num = '(count / 10) % 10';
		thi_num = '((count / 10) / 10) % 10';
		
		if((fir_num != sec_num) && (fir_num != thi_num) && (sec_num != thi_num))
		{
			if((thi_num < sec_num) && (sec_num < fir_num))
			{
				write(1, &thi_num, 1); 	
				write(1, &sec_num, 1); 
				write(1, &fir_num, 1);
			}
		} 
		count++;
	}
}
