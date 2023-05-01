//
//  main.c
//  calculator
//
//  Created by apple on 18/02/23.
//

#include <stdio.h>

#include <stdio.h>

int main()
{
    int a,b,addition,subtraction,multiplication,division;
    float modulo;
    
    printf("VALUE OF A : ");
    scanf("%d",&a);
    
    printf("VALUE OF B : ");
    scanf("%d",&b);
    
    addition=a+b;
    printf("ADDITION : %d",addition);
    
    subtraction=a-b;
    printf("\nSUBTRACTION : %d",subtraction);
    
    multiplication=a*b;
    printf("\nMULTIPLICATION : %d",multiplication);
    
    division=a/b ;
    printf("\nDIVISION : %d",division);
    
    modulo=a%b;
    printf("\nMODULO : %f",modulo);
    
}
