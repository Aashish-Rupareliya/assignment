//
//  main.c
//  pattern_8_**
//
//  Created by apple on 13/03/23.
//

#include <stdio.h>

int main()
{
    int i,j,n;
    
    printf("\nENTER NUM : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for(i=n;i>=0;i--)
    {
        for(j=i+1;j>=1;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
