//
//  main.c
//  swap
//
//  Created by apple on 28/02/23.
//

#include <stdio.h>

int main()
{
    int a,b;
    
    printf("ENTER VALUE OF A : ");
    scanf("%d",&a);
    
    printf("ENTER VALUE OF B : ");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("VALUE OF A : %d",a);
    printf("\nVALUE OF B : %d",b);
}
