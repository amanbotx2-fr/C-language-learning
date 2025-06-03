/*Write a program to calculate the factorial of a given number using a for loop.*/

// factorial 8 mltb 8!
// 8! = 1 X 2 X 3 ..... X 8
#include<stdio.h>

int main(){
    int product=1;
int n =3;
for (int i = 1; i <= n; i++)
{
    product *=i;
}
printf("The factorial is %d", product);
    return 0;
}
