#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s = 0;
	int sq = 0;
	for (int i = 1; i < 101; i++)
	{
		s += i;
		sq += i * i;
	}
	printf("%d\n",abs(s * s - sq));
	return 0;
}
