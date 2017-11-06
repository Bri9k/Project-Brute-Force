#include <stdio.h>
#include <math.h>

int main()
{
	int dmax = 0;
	int d_n = 0;
	int i = 1;
	int n = 0;
	double s;
	while (d_n < 500)
	{
		d_n = 0;
		n = (i*(i + 1))/2;
		for (int j = 1,s = sqrt(n); j <= s; j++)
		{
			if (n % j == 0)
			{
				d_n++;
			}
		}
		d_n *= 2;
		i++;
	}
	printf("%d\n",n);
	return 0;
}
		
	
