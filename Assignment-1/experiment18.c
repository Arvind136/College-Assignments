// Write a program to calculate Factorial of a number (i) using recursion, (ii) using iteration.

#include<stdio.h>  
 
int recursionFactorial(int n){
   	 if ( n == 1 )
     	    return 1;
   	else
     	    return ( n * recursionFactorial(n-1) );
} 	
int iterateFactorial(int n){
	 int n1=1,i;
 for(i=1; i<=n ;i++){    
  	n1 = n1 * i;
 }  
printf("\nFactorial of number %d using Iteration method is %d",n,n1);
return 0;  	
}

int main()    {    
 int n;    
 printf("Enter the Factorial number: ");    
 scanf("%d",&n);
            printf("\nFactorial of number %d using Recursion method is %d",n,    
                          recursionFactorial(n));
 iterateFactorial(n);
  return 0;  
 }    

