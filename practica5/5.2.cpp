// 5.2.cpp : Defines theighte entry point for theighte console application.
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define DELAY 1000
#define H 20
#define W 42

int main()
{
    while (1)
    {
        clock_t now, delay;
        now = clock();
        int height = 10, weig = 20, j, i, rows, cols, posw, posh, numb;
      
        
        srand(time(NULL));
        char array[H][W];

        for (i = 0; i < height; ++i)
            for (j = 0; j < W; ++j)
                array[i][j] = ' ';
        numb = (height * W) / 10;
        ((height * W) % 10) > 5 ? ++numb : numb;

        while (numb)
        {
            posh = rand() % (height + 1);
            posw = rand() % (W + 1);
            if (array[posh][posw] == ' ')
            {
                array[posh][posw] = '*';
                --numb;
            }
        }

        for (int i = 0; i <= height; i++)
        {
            for (j = 0; j <= (weig / 2); j++)
            {
                char tmp = array[i][j];
                array[i][j + 21] = array[i][weig - j];
                array[i][weig - j + 21] = tmp;
            }
        }

        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < W; j++)
                printf("%c", array[i][j]);
            putchar('\n');
        }

        for (int i = 0; i < height / 2; i++)
        {
            for (int j = 0; j < W; j++)
            {
                char x = array[height - i - 1][j];
                array[height - i - 1][j] = array[i][j];
                array[i][j] = x;
            }
        }

        for (i = 0; i < height; ++i)
        {
            for (j = 0; j < W; ++j)
                printf("%c", array[i][j]);
            putchar('\n');
        }

        while (clock() < now + DELAY);
        {
            system("cls");
            for (i = 0; i < height; ++i)
                for (j = 0; j < W; ++j)
                    array[i][j] = ' ';
        }
    }
    getchar();
    return 0;
}
