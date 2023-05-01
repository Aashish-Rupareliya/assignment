//
//  main.c
//  loop_two
//
//  Created by apple on 10/03/23.
//

#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;

    
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
       
        if (num % 2 == 0)
        {
            evenCount++;
            evenSum += num;
        } else
        {
            oddCount++;
            oddSum += num;
        }
    }

    
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

}

