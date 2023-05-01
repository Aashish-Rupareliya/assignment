//
//  main.c
//  simple intrest
//
//  Created by apple on 18/02/23.
//

#include <stdio.h>

int main()
{
    int p,r,n,si ;
    
    printf("VALUE OF P : ");
    scanf("%d",&p);
    
    printf("VALUE OF R : ");
    scanf("%d",&r);
    
    printf("VALUE OF N : ");
    scanf("%d",&n);
    
    si=p*r*n/100 ;
    
    printf("SIMPLE INTERST :%d ",si);
    
}
