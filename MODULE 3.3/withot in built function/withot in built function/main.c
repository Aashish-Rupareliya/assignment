//
//  main.c
//  withot in built function
//
//  Created by apple on 01/05/23.
//

#include <stdio.h>

int main()
{
    char str[100];
    int len = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    // Count the number of characters until the null character is reached
    while (str[len] != '\0') {
        len++;
    }
    
    printf("Length of the string: %d\n", len);
    
    return 0;
}

