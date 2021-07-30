#include <stdio.h>

int	main(void)
{
	int		employeenumber;
	int		workedhours;
	double	hourlyrate;

	scanf("%d %d %lf", &employeenumber, &workedhours, &hourlyrate);
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",
		employeenumber, hourlyrate * workedhours);
	return (0);
}
