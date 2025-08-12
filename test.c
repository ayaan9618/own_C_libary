#include <stdio.h>
#include <stdlib.h>
#include <arlib.h>
 
int main(void) {
double x = takefloat("Enter first number: ");
double y = takefloat("Enter second number: ");

printf("Add: %.2lf\n", add(x, y));
printf("Sub: %.2lf\n", sub(x, y));
printf("Mul: %.2lf\n", mul(x, y));
printf("Div: %.2lf\n", divi(x, y));

int m = takeint("Enter integer for modulo: ");
int n = takeint("Enter second integer for modulo: ");
printf("Mod: %d\n", mod(m, n));

char ch = takechar("Enter a character: ");
printf("Character entered: %c (ASCII: %d)\n", ch, ch);

int code = takeint("Enter ASCII code (0-127): ");
printf("ASCII %d = '%c'\n", code, asciitoc(code));

int size = takeint("Enter size of array: ");
int numbers[size];
arr(numbers, size);

}}