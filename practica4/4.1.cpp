// 4.1.cpp : Defines the entry point for the console application.
//

#include <string.h>
#include <stdio.h>
#define N 100
#define size 100

int main()
{
	int a;
	char *pc[N], cc[N][size];
	printf("Enter the strings:\n");
	for (a = 0; a < N; a++)
	{
		printf("next> ");
		gets_s(cc[a]);
		pc[a] = cc[a];

		if (!*cc[a]) 
			break;
	}
	pc[a] = NULL;
	
	char *str;
	for (int i = 0; i< a - 1; i++)
		for (int j = 0; j < a - i - 1; j++)
		{
			if (strlen(pc[j]) > strlen(pc[j + 1]))
			{
				str = pc[j];
				pc[j] = pc[j + 1];
				pc[j + 1] = str;
			}
		}
		for (int i = 0; i < a; i++)
		{
			printf("%s\n", pc[i]);
		}
	getchar();
	return 0;
}
