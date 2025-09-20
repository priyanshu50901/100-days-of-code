//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int main() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int output = reverseNumber(input);
    printf("Reversed number: %d\n", output);

    return 0;
}