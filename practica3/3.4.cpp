// 3.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#define n 20

int main()
{
	char str[n], i=0;
	int sum=0;
	printf("Enter a sequence of numbers:\n");
	fgets(str, n, stdin);
	while (str[i] != '\0' && str[i]!= '\n' )
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum+=str[i]-'0';
			i++;
		}
	}
	printf("The sum of the input sequence = %d", sum);
	getchar();
	return 0;
}

