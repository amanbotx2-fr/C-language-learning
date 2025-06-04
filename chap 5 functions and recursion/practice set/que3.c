/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2
.*/
// I personally hate phy fu*k phy subject


#include<stdio.h>

float calculate_force(float);

float calculate_force(float mass) {
    float g = 9.8;
    return mass*g;
}

int main(){
    float mass, force;

    printf("enter the mass of the body (in kg):");
    scanf("%f", &mass);

    force = calculate_force(mass);

    printf("the force of attraction on the body is: %.2f Newtons\n", force);
    
    return 0;
}