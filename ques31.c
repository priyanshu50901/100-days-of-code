//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num;
    printf("enter a number ");
    scanf("%d", &num);
    int binary[32]; 
    int i = 0;
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}