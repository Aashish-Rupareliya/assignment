//
//  main.c
//  switch
//
//  Created by apple on 01/03/23.
//

#include <stdio.h>

int main()
{
    int day;
    
    printf("\n ENTER DAY NUMBER : ");
    scanf("%d",&day);
    
    switch(day)
    {
        case 1:
            printf("\nTODAY IS SUNDAY");
            break;
        case 2:
            printf("\nTODAY IS MONDAY");
            break;
        case 3:
            printf("\nTODAY IS TUESDAY");
            break;
        case 4:
            printf("\nTODAY IS WEDNESDAY");
            break;
        case 5:
            printf("\nTODAY IS THURSDAY");
            break;
        case 6:
            printf("\nTODAY IS FRIDAY");
            break;
        case 7:
            printf("\nTODAY IS SATURDAY");
        
        default:
            printf("\nENTER VALID DAY");
            break;
    }
    printf("\n\t\t\tHAVE A NICE DAY");
}
