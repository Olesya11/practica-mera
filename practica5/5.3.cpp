// 5.3.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define N 100
#define size 100

void function1(char buf[]);
int function2(char *str);

int main()
{
    FILE *myfile;
    char *pc[N], str[N][size];
    int k = 0;
    char *estr;

    printf("Open the file: ");
    myfile = fopen("D:/1.txt", "r");

    if (myfile == NULL)
    {
        printf("Error. Maybe file not found.\n");
        getchar();
        return -1;
    }
    else
        printf("OK.\n");

    printf("Strings: \n");
    while (1)
    {
        estr = fgets(str[k], sizeof(str[k]), myfile);
        function1(str[k]);
        function2(estr);
        if (estr == NULL)
        {
            if (feof(myfile) != 0)
            {
                printf("\nFile end.\n");
                break;
            }
            else
            {
                printf("\nError.\n");
                break;
            }
        }
        printf("\n");
        pc[k] = str[k];
        k++;
    }
    printf("Close : ");
    if (fclose(myfile) == EOF) printf("Error.\n");
    else printf("OK.\n");

    getchar();
    return 0;
}


void function1(char buf[])
{
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
}

int function2(char *str)
{
    int i = 0, x, y;
    char str1[N], *s[50];
    s[i] = strtok(str, " ");
    while (s[i] != NULL)
    {
        i++;
        s[i] = strtok(NULL, " ");
    }
    for (int j = 0; j < i; j++)
    {
        strcpy(str1, s[j]);
        x = 1 + rand() % (strlen(str1) - 2);
        y = 1 + rand() % (strlen(str1) - 2);

        if (x != y)
        {
            char tmp = str1[x];
            str1[x] = str1[y];
            str1[y] = tmp;
        }
        printf("%s ", str1);
    }
    return 0;
}
