// Finds sum of POW th power of N
#include <stdio.h>
#include <stdint.h>
#define POW 1000
#define N 2
int main()
{
	uint8_t arr[350] = {0,};
	int i,j,t = 0;
	arr[0] = N;
	for (i = 0; i < POW - 1; i++)
	{
		for (j = 0; j < 350; j++)
		{
			arr[j] *= N;
			arr[j] += t;
			t = arr[j] / 10;
			arr[j] %= 10;
		}	
	}
	t = 0;
	for (j = 0; j < 350; j++)
	{
		t += arr[j];
	}
	printf("%d\n",t);
	return 0;
}
		
	
