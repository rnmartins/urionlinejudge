#include <stdio.h>

int	main(void)
{
	char	sellername;
	double	fixedsalary;
	double	totalsales;

	scanf("%s %lf %lf", &sellername, &fixedsalary, &totalsales);
	printf("TOTAL = R$ %.2lf\n", (totalsales * 0.15) + fixedsalary);
	return (0);
}
