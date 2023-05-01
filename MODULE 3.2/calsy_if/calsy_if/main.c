//
//  main.c
//  calsy_if
//
//  Created by apple on 28/02/23.
//

#include <stdio.h>

int main()
{
    printf("\n\n\t\t CALCULATOR ");
    
    printf("\n\n\t MENU :");
    printf("\n\n 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.MODULO ");
    
    int a;
    
    printf("\n\nENTER SELECTED NUMBER : ");
    scanf("%d",&a);
    
    if(a==1)
    {
        int b,c,addition;
        
        printf("\nENTER VALUE : ");
        scanf("%d",&b);
        
        printf("\nENTER VALUE : ");
        scanf("%d",&c);
        
        addition=b+c;
        
        printf("\nANSWER : %d ",addition);
    }
    else if(a==2)
    {
        int d,e,subtraction;
        
        printf("\n\nENTER VALUE : ");
        scanf("%d",&d);
        
        printf("\nENTER VALUE : ");
        scanf("%d",&e);
        
        subtraction=d-e;
        
        printf("\nANSWER : %d ",subtraction);
    }
    else if(a==3)
    {
        int f,g,multiplication;
        
        printf("\n\nENTER VALUE : ");
        scanf("%d",&f);
        
        printf("\nENTER VALUE : ");
        scanf("%d",&g);
        
        multiplication=f*g ;
        
        printf("\nANSWER : %d ",multiplication);
    }
    else if(a==4)
    {
        int h,i,division;
        
        printf("\n\nENTER VALUE : ");
        scanf("%d",&h);
        
        printf("\nENTER VALUE : ");
        scanf("%d",&i);
        
        division=h/i;
        
        printf("\nANSWER : %d ",division);
    }
    else if(a==5)
    {
        int j,k;
        float modulo;
        
        printf("\n\nENTER VALUE : ");
        scanf("%d",&j);
        
        printf("\nENTER VALUE : ");
        scanf("%d",&k);
        
        modulo=j%k;
        
        printf("\nANSWER : %f ",modulo);
    }
    else
    {
        printf("\nENTER VALID NUMBER");
    }
    
    printf("\n\n\t\t\t THANK YOU \n\t\t\t HAVE A NICE DAY");

}
