// 5.1.cpp : Defines the entry point for the console application.
//
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
#include <ctype.h>
 
# define SIZE 256
# define MAX 64
 
int getWords(char **mas, char *buf, int size)
{
    int ch;
    int count = 0;
 
    while (*buf && count < size)
    {
        while ((ch = (unsigned char)*buf) != '\0' &&
                (isspace(ch) || ispunct(ch)) )
            ++buf;
        if (*buf)
            mas[count++] = buf;
        while ((ch = (unsigned char)*buf) != '\0' &&
                !(isspace(ch) || ispunct(ch)) )
            ++buf;
    }
 
    return count;
}
 
void printWord(char *word)
{           
    int ch;
    while ((ch = *word++) != '\0' &&
            !(isspace(ch) || ispunct(ch)) )
        putchar(ch);
}

void random(char **mas, int count)
{
    int i = count - 1;
    for ( ; i > 0; --i)
    {
        int idx = rand() % (i+1);
        char *tmp = mas[i];
        mas[i] = mas[idx];
        mas[idx] = tmp;
    }
}

int main(void)
{
    char  buf[SIZE];
    char *mas[MAX];
    int count, i;
 
    printf("Enter the string: ");
    fgets(buf, SIZE, stdin);
 
    count = getWords(mas, buf, MAX);
    
    random(mas, count);
    
    for (i = 0; i < count; ++i)
    {
        printWord(mas[i]);
        putchar(' ');
    }
	getchar();
    return 0;
}

