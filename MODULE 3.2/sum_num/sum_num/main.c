//
//  main.c
//  sum_num
//
//  Created by apple on 10/03/23.
//

#include <stdio.h>

int main()
{
    int n,i,sum;
    
    printf("\n ENTER NUM : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum=n%2==0;
        printf("%d",sum);
    }
 
    
}
