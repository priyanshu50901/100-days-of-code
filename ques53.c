//Q53: Write a program to print the following pattern:
/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int n = 5; 
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}