// 1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

int main()
{
    int hr, mn, sec;
    printf ("Enter time, example (hr:mn:sec) \n");
	scanf_s("%d:%d:%d", &hr, &mn, &sec);

	while ( hr > 24 || mn > 60 || sec > 60)
	{
	printf ("Wrong time! Enter time again:\n ");
		scanf_s("%d:%d:%d", &hr, &mn, &sec);
	}

   if( hr < 12 && hr >= 5 )
	{
		printf("Hello! Good morning \n");
	} 
   else if ( hr > 12 && hr < 20)
	{
		printf("Hello! Good afternoon \n");
	}
   else if (hr > 20 )
   {
		printf("Hello! Good night \n");
   }
   else 
   {
	   printf("You can enter only numbers");
   }
 
	getchar();
	getchar();
	getchar();
	getchar();

    return 0;
}


