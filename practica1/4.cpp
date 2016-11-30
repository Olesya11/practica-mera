// the translation of growth.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"


int main()
{
	int f,inc;
	float cm;
	printf("Enter f: ");
	scanf_s("%d",&f);
	while ( f < 0)
	{
		printf("Enter f again: ");
		scanf_s("%d",&f);

	}
		printf("Enter inches: ");
		scanf_s("%d",&inc);
	while ( inc < 0)
	{
		printf("Enter inches again: ");
		scanf_s("%d",&inc);
	}
	cm = (f * 12 + inc ) * 2.54;
	printf(" Your growth is %.1f cm",cm);
		
	getchar();
	getchar();
	return 0;
}

