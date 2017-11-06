#include <stdio.h>

int main()
{
	for (int a = 1; a < 333; a++)
	{
		for (int b = a + 1; b < 500; b++)
		{
			for (int c = b + 1; c < a + b; c++)
			{
				if (c * c == a * a + b * b)
				{
					if (a + b + c == 1000)
					{
						printf("%d\t%d\t%d\n",a,b,c);
						printf("%d\n",a*b*c);
					}
				}
			}
		}
	}
}					
