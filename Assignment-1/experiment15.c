// Write a program in which a function is passed address of two variables and then alter its contents.

#include <stdio.h>

int swap(int *a, int *b){
	int store;
	
	store = *a;
	*a = *b;
	*b = store;
return *a, *b;

}

int main()
{
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    int *ptr1 = &a;
    int *ptr2 = &b;

   swap(ptr1,ptr2);
   printf("The swap value of a & b is  %d & %d",*ptr1, *ptr2);

    return 0;
}
