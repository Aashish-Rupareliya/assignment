//
//  main.c
//  vowel switch
//
//  Created by apple on 01/03/23.
//

#include <stdio.h>

int main()
{
    char alphabet;
    
    printf("\nENTER ALPHANET : ");
    scanf("%c",&alphabet);
    
    switch(alphabet)
    {
        case 'a':
            printf("\nALPHABET IS VOWEL");
            break;
        case 'e':
            printf("\nALPHABET IS VOWEL");
            break;
        case 'i':
            printf("\nALPHABET IS VOWEL");
            break;
        case 'o':
            printf("\nALPHABET IS VOWEL");
            break;
        case 'u':
            printf("\nALPHABET IS VOWEL");
            break;
        default:
            printf("\nALPHABET IS CONSONANT");
            break;
    }
    printf("\n\t\t HAVE A NICE DAY");
}
