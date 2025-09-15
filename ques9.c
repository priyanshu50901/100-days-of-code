//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;
printf("enter principle ,rate ,time");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * ((1 + rate / 100), time) - principal;
    printf("Simple Interest=%.2lf, Compound Interest=%.2lf\n", simpleInterest, compoundInterest);
    return 0;
}