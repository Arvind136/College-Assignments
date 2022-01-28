// :  Write a program to print the patterns (take number of lines from user)

#include <stdio.h>
void rightAngle1(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
		printf("*");  
}
printf("\n");  
}	
} 
void rightAngle2(int n){
	for(int i=0; i<n; i++){
		for(int j=n; j>i; j--){
		printf("*");  
}
printf("\n");  
}	
} 
int main()
{
	int n;
printf("Enter the number of  lines = ");    
scanf("%d",&n);
printf("Right angle triangle pattern \n");    
	rightAngle1(n);
printf("Reverse Right angle triangle pattern \n");    
	rightAngle2(n);
	return 0;
}


