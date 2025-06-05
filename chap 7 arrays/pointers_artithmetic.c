 #include<stdio.h>
 
 int main(){
    // int a;
    // a =5;
    // pointer arithmetic using integer pointer
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);
    // return 0;

    // pointer arithmetic using character pointer
    char a = 'A';
    char *ptr = &a;
    
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    return 0;
 }