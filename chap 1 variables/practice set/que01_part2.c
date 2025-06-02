/*Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.*/

#include<stdio.h>
int main(){

    int length, breadth;
    printf("enter length\n");
    scanf("%d", &length);

    printf("enter breadth\n");
    scanf("%d", &breadth);

    printf("the area of this rectangle is %d ", length*breadth);
}