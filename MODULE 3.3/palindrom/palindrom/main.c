//
//  main.c
//  palindrom
//
//  Created by apple on 01/05/23.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev_str[100];
    int i, len, palindrome = 1;
    
    printf("Enter a string: ");
    gets(str);
    
    len = strlen(str);
    
    // Reverse the string
    for (i = 0; i < len; i++) {
        rev_str[i] = str[len - i - 1];
    }
    rev_str[len] = '\0';
    
    printf("Reverse of the string: %s\n", rev_str);
    
    // Check if the string is a palindrome
    for (i = 0; i < len; i++) {
        if (str[i] != rev_str[i]) {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
