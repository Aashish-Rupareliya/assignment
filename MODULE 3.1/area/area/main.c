//
//  main.c
//  area
//
//  Created by apple on 18/02/23.
//

#include <stdio.h>

int main()
{
    int r;
    float circle;
    
    printf("VALUE OF R : ");
    scanf("%d",&r);
    
    circle=3.14*r*r;
    
    printf("AREA OF CIRCLE : %f",circle);
    
    int w,l,rectangle;
    
    printf("\nVALUE OF W : ");
    scanf("%d",&w);
    
    printf("VALUE OF L : ");
    scanf("%d",&l);
    
    rectangle=w*l;
    
    printf("AREA OF RECTANGLE : %d",rectangle);
    
    int b,h;
    float triangle;
    
    printf("\nVALUE OF B : ");
    scanf("%d",&b);
    
    printf("VALUE OF H : ");
    scanf("%d",&h);
    
    triangle=0.5*h*b;
    
    printf("AREA OF TRIANGLE : %f",triangle);
}
