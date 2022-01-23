// : Write a program to convert a character to its corresponding ASCII code or vice versa.

#include <stdio.h>
int main(){
char ch;
printf("Enter  any  character: ");
scanf("%c", &ch);

int asciiCode = ch;

printf("ASCII value of %c is = %d ",ch, asciiCode);

return 0;
}
