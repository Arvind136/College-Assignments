// Write a program which takes the radius of a circle as input from the user, passes it to another function that computes the area and the circumference of the circle and displays the value of area and circumference from the main() function.


#include <stdio.h>
#define pi 3.14

int circle(int radius){
	float circumference, area;
	
	circumference = 2*pi*radius;
	area = pi*radius*radius;
	
	printf("Circumference & Area of the circle is  %fcm & %f cm2",
            circumference, area);
	return 0;
}

int main()
{
    int radius;
    printf("Enter radius = ");
    scanf("%d", &radius);

    circle(radius);
    return 0;
}
