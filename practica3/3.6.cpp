// 3.6.cpp : Defines the entry point for the console application.
//


#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int main()
{
	srand(time(NULL));
	int mass[SIZE];
	int a = 0 , b = 0, adr1, adr2;
	for(int i = 0; i < SIZE; i++)
	{
		mass[i] = rand() %30 - 10;
		if (mass[i] > 0)
		{
			if (mass[i] > a)
			{
				a= mass[i];
				adr1=i;
			}
		}
		if (mass[i] < 0)
		{
			if (mass[i] < b)
			{
				b = mass[i];
				adr2=i;
			}
		}
		printf("%d ", mass[i]);
	}
	int counter=0;
	if (adr2 < adr1)
	{
		for (int k = adr2 + 1; k < adr1; k++)
			counter = counter + mass[k];
	}
	else
	{
		for (int k = adr1 + 1; k < adr2; k++)
			counter = counter + mass[k];
	}
	printf("\n Max %i ", a);
	//printf("\n Addr1 %i ", adr1);
	printf("\n Min %i ", b);
	//printf("\n Addr2 %i ", adr2);
	printf("\nThe sum of the numbers between the minimum and maximum value = %i", counter);
	getchar();
	return 0;
}
