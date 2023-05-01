//
//  main.c
//  petern_6_aabbcc
//
//  Created by apple on 13/03/23.
//

#include <stdio.h>

int main()
 {
    int num, i, j ,a=65;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c ",a);
        }
        a++;
        printf("\n");
    }
}
