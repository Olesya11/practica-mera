// 3.5.cpp : Defines the entry point for the console application.
//

#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#define size 8
int main()
{
	srand(time(NULL));
	int mass[size];
	int a, b;

	for(int i = 0; i < size; i++)
	{
		mass[i] = rand() %30 - 10;
		if ( mass[i] > 0 )
		{
			b = i;

		}
		printf("%d ", mass[i]);

	}
	for (int i = 0; i < size; i++)
	{
		if (mass[i] < 0)
		{
			a = i;
			break;
		}
	}
	int sum=0;
	for (int i = a + 1; i < b; ++i)
	{
		//printf("\n%i + ", mass[i]);
		sum+=mass[i];
	}
	//printf("\n Min %i ", a);
	//printf("\n Max %i ", b);
	printf("\nThe amount of numbers between the first negative number and the last positive number = %i", sum);
	getchar();
	return 0;
}

