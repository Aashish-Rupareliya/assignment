//
//  main.c
//  for_fact
//
//  Created by apple on 06/03/23.
//

#include <stdio.h>

int main()
{
    int n,fact=1;
    
    printf("\n ENTER VALUE : ");
    scanf("%d",&n);
    
    for(n=n;n>=1;n--)
    {
        fact=fact*n;
        
        
    }
    printf("\n%d",fact);
}
