#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
             printf("You entered 1\n");
             break;// iska mtlb hai ki agar mai input 1 dunga to ye same output dekr band ho jayega (braek ka sirf yahi mtlb hai)
        case 2:
             printf("You entered 2\n");
             break;
        case 3:
             printf("You entered 3\n");
             break;
        case 4:
             printf("You entered 4\n");
             break; 
        default:
            printf("Nothing matched");
    }
    return 0;
}