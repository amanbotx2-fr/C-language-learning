// Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>

float C_to_F(float);

float C_to_F(float c)
{
    return ((9 * c / 5) + 32);
}

int main()
{
    float c = 35;
    printf("celsius to Fahrenheit for %.2f is %.2f", c, C_to_F(c));
    return 0;
}