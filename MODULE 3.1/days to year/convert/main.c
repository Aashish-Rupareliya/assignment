//
//  main.c
//  convert
//
//  Created by apple on 18/02/23.
//

#include <stdio.h>

int main()
{
    int year,days ;
    
    printf("ENTER NUM OF YEAR : ");
    scanf("%d",&year);
    
    days=year*365;
    
    printf("DAYS  : %d",days);
    
    printf("\nENTER NUM OF DAYS : ");
    scanf("%d",&days);
    
    year=days/365;
    
    printf("YEAR : %d",year);
    
    
}
