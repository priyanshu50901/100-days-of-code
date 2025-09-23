//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, temp, first, last, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }
    first = temp;
    if (power == 1) {
        printf("Swapped Number: %d\n", num);
        return 0;
    }
    int middle = num % power;     
    middle /= 10;                 
    int swapped = last * power + middle * 10 + first;
    printf("Swapped Number: %d\n", swapped);

    return 0;
}