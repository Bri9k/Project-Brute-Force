#include <stdio.h>

int main()
{
	int t;
	FILE* f = fopen("input.txt","r");
	int a[1000];
	int i = 0;
	while(!feof(f))
	{
		t = fgetc(f);
		if (t != '\n')
		{
			a[i] = t  - '0';
			i++;		
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		printf("%d\n",a[i]);
	}
	fclose(f);
      	long int max = 0;
	long int p = 1;
	for (int j = 0; j < 987; j++)
	{
		p = 1;
		for (int k = 0; k < 13; k++)
		{
			p *= a[j + k];
		}
		if (p > max)
		{
			max = p;
		}
	}
	printf("%ld\n",max);
}
			
		
