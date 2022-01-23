// Write a program to find the sum and product of two variables.

#include <stdio.h>
int main(){
int a, b, sum, product;
printf("Enter  number1: ");
scanf("%d", &a);
printf("Enter  number2: ");
scanf("%d", &b);

sum = a+b;
product = a*b;

printf("Sum = %d\n",sum);
printf("Product = %d\n",product);


return 0;
}
