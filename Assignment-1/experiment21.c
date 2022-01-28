// Write a program to convert a given binary number to corresponding decimal number and vice-versa(using function).

#include <stdio.h>
int toDecimal(int n){
	int rem, sum=0, base=1;
 	 while ( n > 0){  
     		rem = n % 10; 
           		sum = sum + rem * base;  
           		n = n / 10; 
           		base = base * 2;  
           }  
	return sum;
} 

int main()
{
	int n;
printf("Enter a binary number = ");    
scanf("%d",&n);
	
printf(" The binary number is %d \n ",n);   
printf(" The decimal number is %d ", toDecimal(n));   


	return 0;
}
