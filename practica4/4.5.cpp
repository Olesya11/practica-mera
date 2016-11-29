// 4.5.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>
#define N 100
#define size 100

int main()
{
    FILE *myfile;
    char *pc[N], str[N][size];
    int k = 0;
    char *STR;

    printf("Open the file: ");
    myfile = fopen("D:/1.txt", "r");
    if (myfile == NULL) 
    {
        printf("Error\n");
        getchar();
        return -1; 
    }
    else 
        printf("OK\n");

    printf("Strings: \n");
    while (true)
    {
        STR = fgets(str[k], sizeof(str[k]), myfile);

        if (STR == NULL)
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
        printf("%s", str[k]);
        pc[k] = str[k];
        k++;
    }
    printf("Close the file: ");
    if (fclose(myfile) == EOF) printf("Error.\n");
    else printf("OK.\n");

    char *temp;
    bool res;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < (k - i) - 1; j++) 
        {
            if (strlen(pc[j]) > strlen(pc[j + 1])) 
            {
                temp = pc[j];
                pc[j] = pc[j + 1];
                pc[j + 1] = temp;
            }
        }
    }
    char * fisizeame = "D:/1.txt";
    FILE * file = fopen(fisizeame, "w");
    if (file) 
    {
        for (int i = 0; i < k; i++)
        {
            printf("%s", pc[i]);
            res = fputs(pc[i], file);
        }
        if (!res)
            printf("Data recorded. Ok.");
    }
    else
        printf("Data is not recorded. Error.");
    fclose(file);
    getchar();
    return 0;
}
