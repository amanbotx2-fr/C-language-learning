#include<stdio.h>

int main(){
    int a=1; int b=1;

    printf("The value of a and b is %d\n", a&&b);//and
    printf("The value of a or b is %d\n", a||b);//or 
    printf("The value of not(a) is %d\n", !a);// a ki value palat do 0 ko 1 kr do 1 ko 0 kr do

    if(a&&b){
        printf("both are true\n ");
    }
    //is same as writting...

    if(a){
        if(b){
            printf("both are true");
        }
    }

    return 0;
}