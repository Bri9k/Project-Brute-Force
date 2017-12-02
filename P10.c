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
	long int s = 0;
	for (int n = 2;n < 2000000; n++)
	{
		if (isprime(n))
		{		
			s += n;
		}
	}
	printf("\n%ld\n",s);
}
