#include <stdio.h>

#include <ctype.h>
int main() {
int vowels = 0, consonants = 0;
char str[50];
printf("Enter a string: ");
fgets(str, 50, stdin);
char *ptr = str;
while (*ptr != '\0') {
char ch = tolower(*ptr);
if (ch >= 'a' && ch <= 'z') {
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
vowels++;
} else {
consonants++;
}
}
ptr++;
}
printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", consonants);
return 0;
}
