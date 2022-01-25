// Write a function to find whether a given no. is prime or not. Use the same to generate the prime numbers less than 100.

#include <math.h>
#include <stdio.h>

int checkPrime(int n){
	int  i, flag = 1;
	for (i = 2; i <= sqrt(n); i++) {
        		if (n % i == 0) {
          			 flag = 0;
            		break;
       		 }
    	}
 
    	if (n <= 1){
        		flag = 0;
 	}
    	if (flag == 1) {
        		printf("%d is a prime number", n);
    	}	
   	 else {
        		printf("%d is not a prime number", n);
    	}
return 0;

}

int main()
{
    int n;

    printf("Enter a number: \n");
    scanf("%d", &n);

    checkPrime(n);

    return 0;
}
