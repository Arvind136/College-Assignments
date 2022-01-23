// Write a program to compute the factors of a given number.

#include <stdio.h>
int main(){
int i, n;
printf("\n Please Enter any number to Find Factors: ");
scanf("%d", &n);

printf("\n Factors of the Given Number are: ");
for (i = 1; i <=n; i++){
		if(n%i == 0){
			printf(" %d,  ", i);
		}
}

return 0;
}
