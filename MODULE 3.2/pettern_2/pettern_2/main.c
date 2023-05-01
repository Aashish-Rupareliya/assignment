//
//  main.c
//  pettern_2
//
//  Created by apple on 13/03/23.
//

#include <stdio.h>

int main()
{
    int n,i,j;
    
    printf("\n enter num:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           if(j%2==0)
           {
               printf("o");
           }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}
