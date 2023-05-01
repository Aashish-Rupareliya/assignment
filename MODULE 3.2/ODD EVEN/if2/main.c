//
//  main.c
//  if2
//
//  Created by apple on 18/02/23.
//

#include <stdio.h>

int main()
{
    int number;
    
    printf("ENTER NUMBER :");
    scanf("%d",&number);
    
    if(number%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
