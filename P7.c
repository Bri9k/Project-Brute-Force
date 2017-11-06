#include <stdio.h>
//#include <math.h>

int isprime(int n)
{
	int l = n;
	for (int i = 2,l = n; i < l; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
		else
		{
			l = n / i;
		}
	}
	return 1;
}

int main()
{
	int i,n;
	for (i = 0, n = 2;i < 10001; n++)
	{
		if (isprime(n))
		{		
			i++;
			printf("%d\n",n);
		}
	}
	printf("\n%d\n",n - 1);
}
