// Write a program to compute the sum of the first n terms of the following series, S=1+1/2+1/3+1/4+.....

#include<stdio.h>  
 int main(){    
        int n;
        float sum;
        printf("Enter a number: ");    
        scanf("%d", &n);    
       for(float i=1; i<=n; i++){    
                sum = sum + 1/i;
       }    
       printf("The sum of given series: %f",sum);    
       return 0;  
}   
