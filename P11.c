#include <stdio.h>
#define SIZE 20
#define N 4

int main()
{
	int a[SIZE][SIZE];
	FILE* f = fopen("input.txt","r");
	int max = 0, t = 1;
	int i,j;
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			// Read
			fscanf(f,"%02d",&a[i][j]);	
		}
	}
	fclose(f);
	// Sweep Main Region
	for (i = 0; i < SIZE - N + 1; i++)
	{
		for (j = 0; j < SIZE - N + 1; j++)
		{
			// Diagonaly
			t = a[i][j] * a[i + 1][j + 1] * a[i + 2][j + 2] * a[i + 3][j + 3];
			if (t > max)
				max = t;
			// And Right
			t = a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3];
			if (t > max)
				max = t;			

		}
	}
	
	//Blitzkreig
	for (i = SIZE - 1; i > 1 + N - 1; i--)
	{
		for (j = 0; j < SIZE - N + 1; j++)
		{
			// Diagonal
			t = a[i][j] * a[i - 1][j + 1] * a[i - 2][j + 2] * a[i - 3][j + 3];
			if (t > max)
				max = t;
			// And Up
			t = a[i][j] * a[i - 1][j] * a[i - 2][j] * a[i - 3][j];
			if (t > max)
				max = t;
		
		}
	}
	printf("%d",max);
	return 0;
}
			

	
				
			
			
