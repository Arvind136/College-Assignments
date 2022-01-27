// Write a program to display Fibonacci series (i) using recursion, (ii) using iteration.
#include<stdio.h>   
int iterateFibonacci(int n){
	 int n1=0,n2=1,n3,i;
 printf("Fibonacci Series using Iteration method is: %d, %d, ",n1,n2);
 for(i=2;i<n;++i){    
  	n3=n1+n2;    
  	printf("%d, ",n3);    
  	n1=n2;    
  	n2=n3;    
 }  
return 0;  	
}
int recursionFibonacci(int n){
   	if ( n == 0 )
    	     return 0;
   	else if ( n == 1 )
     	    return 1;
   	else
     	    return ( recursionFibonacci(n-1) + recursionFibonacci(n-2) );
} 
int main()    {    
 int n;    
 printf("Enter the number of elements: ");    
 scanf("%d",&n);  
 iterateFibonacci(n);
printf("\nFibonacci Series using Recursion method is: ");
 for(int i=0; i<n; i++){
	printf("%d, ",recursionFibonacci(i));
}
  return 0;  
 }    
   

