//
//  main.c
//  reverse string using recursion
//
//  Created by apple on 01/05/23.
//

#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end);

int main()
{
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    // Call the function to reverse the string
    reverseString(str, 0, strlen(str) - 1);
    
    printf("Reverse of the string: %s\n", str);
    
    return 0;
}

void reverseString(char *str, int start, int end)
{
    char temp;
    
    if (start >= end) {
        return;
    }
    
    // Swap the first and last character
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursively call the function to reverse the remaining string
    reverseString(str, start + 1, end - 1);
}
