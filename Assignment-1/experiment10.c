// Write a program to interchange the values of two variables.

#include <stdio.h>
int main(){
int a, b, store;
printf("Enter  a =  ");
scanf("%d", &a);
printf("\nEnter  b =  ");
scanf("%d", &b);

store = a;
a = b;
b = store;

printf("The value of a = %d\n",a);
printf("The value of b = %d\n",b);

return 0;
}
