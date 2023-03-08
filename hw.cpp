//write a program to performe addition , substraction, multiplication, division using user define function.


#include<stdio.h>
#include<conio.h>
#include<math.h>

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            if (result == -1) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        return -1;
    } else {
        return num1 / num2;
    }
}



