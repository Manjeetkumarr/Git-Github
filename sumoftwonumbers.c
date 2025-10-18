#include<stdio.h>
int addTwoNumbers(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = addTwoNumbers(num1, num2); // either // int sum = num1 + num2;
    printf("The sum is: %d\n", sum);
    return 0;
}