#include <stdio.h>
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int main() {
int choice;
float num1, num2;
printf("1. Addition\n");

printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice >= 1 && choice <= 4) {
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
}
switch (choice) {
case 1:
printf("Result = %.2f\n", add(num1, num2));
break;
case 2:
printf("Result = %.2f\n", subtract(num1, num2));
break;
case 3:
printf("Result = %.2f\n", multiply(num1, num2));
break;
case 4:
if (num2 != 0)
printf("Result = %.2f\n", divide(num1, num2));
else
printf("Division by zero is not allowed\n");
break;
case 5:
printf("Exiting program...\n");
break;
default:
printf("Invalid choice\n");
}
return 0;
}
float add(float a, float b) {
return a + b;
}
float subtract(float a, float b) {
return a - b;
}
float multiply(float a, float b) {
return a * b;
}
float divide(float a, float b) {
return a / b;
}
