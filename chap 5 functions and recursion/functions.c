#include<stdio.h>

int sum(int, int);// this is function prototype

int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 1;
    int b = 2;
    //int c = a + b;
    //printf("The sum is %d\n",c);
    //the comments are for refrence what we had to do before vs what we can do with funtions
    // a and b are called parameters
    sum(a,b); // function call

    int a1= 12;
    int b1= 23;

    //int c1 = a1 + b1;
    //printf("The sum is %d\n",c1);
    sum(a1,b1);

    int a2 = 2;
    int b2 = 27;

    sum(a2,b2);

    return 0;
}