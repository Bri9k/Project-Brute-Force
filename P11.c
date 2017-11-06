#include <stdio.h>

int main()
{
	int a[20][20];
	FILE* f = fopen("input.txt","r");
	int max = 0,p;
	int t;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			// Read
			t = fgetc(f) - '0';
			t = t * 10 + fgetc(f) - '0';
			a[i][j] = t;
			printf("%02d ",a[i][j]);
			// Next
			fgetc(f);
		}
		// That was not a space
		ungetc('\n',f);
		// Line Over, Next line
		t = fgetc(f);
		printf("\n");
	}
	fclose(f);
	
	for (int i = 0; i < 17; i++)
	{
		for(int j = 0; j < 17; j++)
		{
			// Right
			p = a[i][j] * a[i + 1][j] * a[i + 2][j] * a[i + 3][j];
			if (p > max)
			{
				max = p;
			}
			// Down
			p = a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3];
			if (p > max)
			{
				max = p;
			}
			// Right - Down
			p = a[i][j] * a[i + 1][j + 1] * a[i + 2][j + 2] * a[i + 3][j + 3];
			if (p > max)
			{
				max = p;
			}
		}
	}
	printf("\n%d\n",max);
	return 0;
}
	 
			 
				
			
			
