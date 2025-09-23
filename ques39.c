//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num, digit, product = 1, Odd = 0;
   printf("enter a number");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            Odd = 1;
        }
        num /= 10;
    }
    if (Odd)
        product = 1;

    printf("%d\n", product);
    return 0;
}