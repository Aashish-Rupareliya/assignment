//
//  main.c
//  loop_reverse_num
//
//  Created by apple on 10/03/23.
//

#include <stdio.h>

int main()
{
    int number,reverse_num=0,remainder;
    
    printf("\n ENTER NUM :");
    scanf("%d",&number);
    
    while(number!=0)
    {
        remainder = number % 10;
        reverse_num = reverse_num * 10 + remainder;
        number = number / 10;
    }
    printf(" \n REVERSED NUM IS : %d",reverse_num);
}
