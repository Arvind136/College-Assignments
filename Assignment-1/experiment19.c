// Write a program to calculate GCD of two numbers (i) with recursion (ii) without recursion.

#include <stdio.h>
int recursionGcd(int a, int b){
	if (a == 0)
	    return b;
	if (b == 0)
	    return a;
	if (a == b)
	    return a;
	if (a > b)
	    return recursionGcd (a-b, b);
	return recursionGcd (a, b-a);
}
int iterateGcd(int a, int b){
	while(a != b){
	if(a>b){
	a = a-b;
}
else{
	b = b-a;
}
}
return a;
}
int main()
{
	int a , b ;
printf("Enter a = ");    
scanf("%d",&a);
printf("Enter b = ");    
scanf("%d",&b);
printf("GCD of %d and %d with Recursion method is %d ", a, b, recursionGcd(a, b));
printf("\nGCD of %d and %d without Recursion method is %d ", a, b, iterateGcd(a, b));
	return 0;
}
