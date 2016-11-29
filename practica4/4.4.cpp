// 4.4.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>
#define SIZE 50
int main()
{
	char mass[SIZE], k;
	int count=0, max=0;
	printf("Enter the string:\n");
	fgets(mass, SIZE, stdin);
	int siz=strlen(mass);
	for (int i=0; i < siz; i++)
	{
		if (mass[i] == mass[i+1])
		{
			count++;
		}
		if (count > (max+1))
		{
			max = count+1;
		}
		if (mass[i] != mass[i+1])
		{
			count = 0;
		}
		
	}
	char *m = mass;
	while (*m)
	{
		if (*m == *(m+1))
			count++;
		if (count == (max-1))
			k = *m;
		if (*m != *(m+1))
			count = 0;
		*m++;
	}
	printf("The longest sequence of identical letters: ");
	for (int j=0; j < max; j++)
	{
		printf("%c", k);
	}
	printf("\nLength: ");
	printf("%i", max);
	getchar();
	getchar();
	return 0;
}
