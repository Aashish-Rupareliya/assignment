//
//  main.c
//  max_num_loop
//
//  Created by apple on 10/03/23.
//

#include <stdio.h>


int main()
{
    int num, max = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int digit = num % 10;
        if (digit > max)
            
        {
            max = digit;
        }
        
        num /= 10;
    }

    printf("The maximum digit is %d\n", max);

}

