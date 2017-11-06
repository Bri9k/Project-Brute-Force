#include <stdio.h>
#include <math.h>

int main()
{
	int s = 0;
	for (int i = 1; i < sqrt(842161320); i++)
	{
		if (842161320 % i == 0)
		{
			s++;
		}
	}
	printf("%d\n",s);
	return 0;
}
		
		
	
