#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[100][50];
	int sum[51] = {0,};
	FILE * f = fopen("input.txt","r");
	int j = 0;
	for (int i = 0; i < 100; i++)
	{
		for (j = 0; j < 50; j++)
		{
			a[i][49 - j] = fgetc(f) - '0';
			printf("%d",a[i][49 - j]);
		}
		fgetc(f);
		printf("\n");		
	}
	for (j = 0; j < 50; j++)
	{
		for (int i = 0; i < 100; i++)
		{
			sum[j] += a[i][j];
		}
		sum[j + 1] += sum[j] / 10;
		sum[j] %= 10;
	}
	int dec = 2;
	if (sum[j] == 0)
	{
		dec = 0;
	}
	else if (sum[j] < 10)
	{
		dec = 1;
	}
	else if (sum[j] < 100)
	{
		dec = 2;
	}
	printf("%d",sum[j]);
	for (j = 0; j < 10 - dec; j++)
	{
		printf("%d",sum[49 - j]);
	}
	printf("\n");
	  
	
	//printf("\n%ld\n",sum);
	fclose(f);
	return 0;
}
