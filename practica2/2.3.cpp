// 2.3.cpp : Defines the entry point for the console application.
//


#include "stdio.h"



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
	 for (int j = 0; j < count; ++j)
	 {
		
		 for(int z = 0; z <= (count - j) + 40 ; ++z)
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

