// Write a program that swaps two numbers using pointers.

#include <stdio.h>

int main()
{
    int a, b,*store;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    store = ptr1;
    ptr1 = ptr2;
    ptr2 = store;

    printf("The swap value of a & b is  %d & %d",*ptr1, *ptr2);

    return 0;
}


