#include<stdio.h>

int main(){
    int i = 0;
    do
    {
        printf("The value of i is %d\n",  i);
        i++;
    } while (i<4);
    
    return 0;
}

// do-while executes the codes and then checks the condtion.
// it executes at least once