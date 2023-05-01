//
//  main.c
//  fibbonaco_while
//
//  Created by apple on 06/03/23.
//

#include <stdio.h>

int main()
{
    int a=0,b=1,c=0,n;
    
    printf("\n ENTER VALUE : ");
    scanf("%d",&n);
    
    printf("\n%d",a);
    printf("\n%d",b);
    
    while(n>=1)
    {
        c=a+b;
        printf("\n %d",c);
        a=b;
        b=c;
        n--;
    }
}
