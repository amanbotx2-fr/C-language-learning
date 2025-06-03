#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i==7){
            break; // exit the loop
        }
        printf("i is %d\n", i);
    }
    
    return 0;
}