// Write a program to compute the sum of the first n terms of the following series, S=1-2+3-4+5......

#include<stdio.h>  
 int main(){    
        int n, evenOdd, sum=0;
        printf("Enter a number: ");    
        scanf("%d", &n);  
        evenOdd = n%2;  
       if(evenOdd == 0){    
               sum = sum - (n/2);
       } 
       else{ 
               sum = sum + (n+1)/2;
       }  
       printf("The sum of given series: %d",sum);    
       return 0;  
}   
