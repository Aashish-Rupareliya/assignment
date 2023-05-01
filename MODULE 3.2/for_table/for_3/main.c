//
//  main.c
//  for_3
//
//  Created by apple on 06/03/23.
//

#include <stdio.h>

int main()
{
    int a,n;
    
    printf("ENTER NUM :");
    scanf("%d",&n);
    
    for(a=1;a<=10;a++)
    {
        printf("\n%d * %d = %d",a,n,a*n);
    }
}
