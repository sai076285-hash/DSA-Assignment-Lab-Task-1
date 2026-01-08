#include <stdio.h>
int main() {
char str[100];
char *ptr;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
ptr = str;
int length = 0;
while (*ptr != '\0') {
length++;
ptr++;
}
printf("Length of the string is: %d\n", length);
return 0;
}
