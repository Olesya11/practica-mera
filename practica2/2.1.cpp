// j.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

 
int main()
{
    float height, len, h;
	int time=0;
	constant: float g=9.81, m=11800;
	printf("Enter the height at which a bomb dropped:\n");
	scanf_s("%f", &height);
	while ( height < 0 || height > m)
	{
		printf("Enter the height at which a bomb dropped again:\n");
		scanf_s("%f", &height);
	}
	h = height;
	while (h  > 0 )
	{
	len = ( g * time * time) / 2;
	h = height - len ;
	if (h < 0 )
		h=0;
		

	printf("t=%dc h=%.1fm\n" , time , h);
	time++;

	}

	printf("BABAH!!! BABAH!!! BABAH!!!");
	getchar();
	getchar();

    return 0;
}
