#include<stdio.h>

int main(){
    for (int i =0; i < 15; i++){
        if(i==5){
            continue;//skip this iteration
        }
        printf("i is %d\n",i);
    }
    return 0;
}