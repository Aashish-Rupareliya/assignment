//
//  main.c
//  recursion
//
//  Created by apple on 10/04/23.
//

#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    if (*str == '\0') {
        return;
    }
    else {
        reverse_string(str + 1);
        printf("%c", *str);        
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The reversed string is: ");
    reverse_string(str);
    printf("\n");
    return 0;
}
