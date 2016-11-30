// the translation from degrees to radians.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
float angle;
char symbol;
constant: double pi=3.14;
printf("Please enter an angle. For example 40D or 40R: ");
scanf_s("%f%c", &angle ,&symbol);
if (symbol=='D')
{
	printf("R=%.2f", angle*pi/180);
}
else if (symbol=='R')
{
	printf("D=%.2f",angle*180/pi);
}
else
{
	printf ("Entered correct data");
}
getchar();
getchar();
getchar();
return 0;
}

