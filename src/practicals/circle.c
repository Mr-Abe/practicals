/*
Area of a Circle: Write a program (circle.c) that uses a float for PI (3.14159) 
and takes a float radius from the user (hint: scanf("%f", &radius);). 
Calculate and print the area. Don't forget to update your Makefile to build circle 
(you can make TARGET = circle).
*/

#include <stdio.h>

int main(int argc, char **argv) {
    const float PI = 3.14159;
    float radius, area;

    printf("What is the radius of the circle? ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of a circle with radius %.0f is %.2f\n", radius, area);

    return 0;
}
