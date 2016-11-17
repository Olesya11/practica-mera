// 2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
using namespace std;


int main()
{
	int count, num;
	printf("Enter the number of rows for the Christmas tree: ");
	scanf_s("%i", &count);
	while ( count <= 0 )
	{
		printf("The data was entered incorrectly! Enter the number of rows for the Christmas tree again: ");
		scanf_s("%i", &count);
	}
	 for (int j = 0; j <= count; ++j)
	 {
		 for ( int i = 0; i < 40; i++)
		 {
			 printf(" ");
		 }
		 for(int z = 0; z <= count - j ; ++z)
		 {
             printf(" ");
		 }
		 for(int z = 0; z <= 2 * j; ++z)
		 {
			 printf("*");
		 }
		 printf("\n");
	 }
	getchar();
	getchar();
	return 0;
}

