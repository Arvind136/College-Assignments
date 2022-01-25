// :  Write a program to print Fibonacci series of n terms, i.e.0,1,1,2,3,5,8,13, 21, .. n

#include<stdio.h>    
int main()    {    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements: ");    
 scanf("%d",&number);  
 
 printf("Fibonacci Series is: %d, %d, ",n1,n2);
 for(i=2;i<number;++i){    
  	n3=n1+n2;    
  	printf("%d, ",n3);    
  	n1=n2;    
  	n2=n3;    
 }  
  return 0;  
 }    
