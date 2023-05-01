//
//  main.c
//  pattern_7_**
//
//  Created by apple on 13/03/23.
//

#include <stdio.h>

int main()
{
    int n, i, j, space;

    printf("Enter the number : ");
    scanf("%d", &n);

    space = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
