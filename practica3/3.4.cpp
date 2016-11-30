// 3.4.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#define size 20

int main()
{
	char str[size], i=0;
	int sum=0;
	printf("Enter a sequence of numbers:\n");
	fgets(str, size, stdin);
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

