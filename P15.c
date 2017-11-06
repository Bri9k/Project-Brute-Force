#include <stdio.h>

#define MAX 100

long unsigned int choose(unsigned int n, unsigned int r);

int main()
{
	printf("%lu\n",choose(40,20));
}

long unsigned int choose(unsigned int n, unsigned int r)
{
	int arr[MAX];
	if (n < 0 || r < 0)
	{
		return -1;
	}
	if (n < r)
	{
		return 0;
	}
	int i,j,k,d = 1,t = 1;
	long unsigned int res = 1;
	for (i = r + 1; i <= n; i++)
	{
		arr[i - r - 1] = i; // Place term in numerator				
	}
	j = i - r -1; // n holds number of terms in numerator
	for (i = 1; i <= r; i++)
	{
		t = i;
		for (k = 0; k < j; k++)
		{
			// If divisible, reduce and escape
			if (arr[k] % i == 0)
			{
				arr[k] /= i;
				t = 1;
				break;
			}
		}
		d *= t;
		printf("%d %lu\n",i,res);
	}
	
	for (k = 0; k < j; k++)
	{
		printf("%d\t",arr[k]);
		res *= arr[k];
		printf("%lu\n",res);
	}
			
	
	return res / d;
}
