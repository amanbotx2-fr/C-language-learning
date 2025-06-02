#include <stdio.h>

int main()
{
    /*Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.
    */
    int sub1;
    int sub2;
    int sub3;
    float totalMarks, percentage;

    printf("Enter your marks for sub1:\n");
    scanf("%d", &sub1);

    printf("Enter your marks for sub2:\n");
    scanf("%d", &sub2);

    printf("Enter your marks for sub3:\n");
    scanf("%d", &sub3);

    printf("The marks are %d, %d and %d\n", sub1, sub2, sub3);

    totalMarks = sub1 + sub2 + sub3;
    percentage = (totalMarks / 300.0) * 100;  

    printf("Your total percentage is: %.2f\n", percentage);

    if (sub1 < 33 || sub2 < 33 || sub3 < 33) {
        printf("Bhai tu individual subject me fail hone ke wajah se fail ho gya\n");
    }
    else if (percentage >= 40) {
        printf("Pass hai tu bhai\n");
    }
    else {
        printf("Padhai kr bhai fail ho gya tu to\nKoi na momos ka thela bhi bahut chalta aaj kal\n");
    }

    return 0;
}
