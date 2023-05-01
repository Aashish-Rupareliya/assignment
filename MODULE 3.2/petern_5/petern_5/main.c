//
//  main.c
//  petern_5
//
//  Created by apple on 13/03/23.
//

#include <stdio.h>

int main()
{
    int i,n,j,a=65;
    
    printf("\n ENTER VALUE :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",a);
            a++;
        }
        printf("\n");
    }
}
