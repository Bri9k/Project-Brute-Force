#include <stdio.h>

long int collatz(int i);
int main()
{
	long int k;
	int t;
	int max = 1;
	long int i;
	for(i = 1; i <= 1000000; i++)
	{
		t = collatz(i);
		//printf("%lu:%d\n",n,t);
		if (t > max)
		{
			max = t;
			k = i;
		}
	}
	printf("M:%ld\n",k);
	return 0;
}
		
	
	
long int collatz(int i)
{
	long long unsigned int n = i;
	int k = 1;
	while(n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else if (n % 2 == 1)
		{
			n = 3 * n + 1;
		}
		k++;
	}
	return k;
}










