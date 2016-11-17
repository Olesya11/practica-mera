// 2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
#include <ctime>


int main()
{

	srand(time(NULL));
   int i = rand()%100 , numb, p; // p - attempt, number - the number of user, i - unknown number
 
 
	rewind(stdin);
	printf("%i", i);
	printf("Hello! Try to guess the unknown number. Enter your number: ");
	scanf_s("%i", &numb);
	while ( numb < 0)
	{
		printf("The unknown number is positive. Enter the number again:");
		scanf_s("%i", &numb);
	}

	p=1;
	while ( i != numb )
	{
		++p;

		if ( numb < i)
		{
			printf("Try again. Unknown number more. Enter your number again: ");
			scanf_s("%i", &numb);
		}
		if ( numb > i)
		{
			printf("Try again. Unknown number less. Enter your number again: ");
			scanf_s("%i", &numb);
		}
		
	}
	printf("Congratulations! You guessed the number in %i attempts", p);
	getchar();
	getchar();
	return 0;
}

