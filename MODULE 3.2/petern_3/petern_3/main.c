//
//  main.c
//  petern_3
//
//  Created by apple on 13/03/23.
//

#include <stdio.h>

int main()
{
    int i,j,n,a=1;
    
    printf("\n enter number :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf(" %d ",a);
            a++;
        }
        printf("\n");
    }
}

