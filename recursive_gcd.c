#include <stdio.h> 
int findGCD(int a, int b) { 
if (b == 0) return a; 
return findGCD(b, a % b); 
} 
int main() { 
int a = 56, b = 98; 
printf("Input: a=%d, b=%d\nOutput: GCD is %d", a, b, findGCD(a, b)); 
return 0; 
} 
