#include <stdio.h>
int main() {
int i, n;
printf("Enter a number: ");
scanf("%d", &n);
int temp = n;
int remainder, binary = 0;
while (n != 0) {
remainder = n % 2;
binary += remainder * i;
n /= 2;
i *= 10;
}
printf("Binary representation of %d is %d\n", temp, binary);
return 0;
}
