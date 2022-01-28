// Write a program to check whether a given number is Armstrong number or not(using function).

#include <stdio.h>
int isArmstrong(int n){
	int n1, rem, sum=0;
while(n != 0){
	n1=n%10;
	sum= sum + n1*n1*n1;
	n= n/10;
}
if(sum==n){
	return 0;
}
else{
	return 1;
}
}
int main()
{
	int n;
printf("Enter a number = ");    
scanf("%d",&n);
if(isArmstrong==0){
    printf(" %d is a Armstrong number.");
}
else{
printf(" %d is not a Armstrong number.",n);
}
	return 0;
}

