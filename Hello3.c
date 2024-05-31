#include <stdio.h>
/*  Basic Data Types
Integer Types:

int: Represents integer values. Typically, it is 4 bytes (32 bits) in size.
short: Represents shorter integer values. Typically, it is 2 bytes (16 bits) in size.
long: Represents longer integer values. Typically, it is 4 or 8 bytes depending on the system.
long long: Represents even larger integer values. Typically, it is 8 bytes (64 bits) in size.

Floating-Point Types:

float: Represents single-precision floating-point values. Typically, it is 4 bytes (32 bits) in size.
double: Represents double-precision floating-point values. Typically, it is 8 bytes (64 bits) in size.
long double: Represents extended-precision floating-point values. The size can vary, but it is often 10, 12, or 16 bytes.

Character Type:

char: Represents a single character. Typically, it is 1 byte (8 bits) in size.*/
int main()
{
    // mainly use datatype
    int age = 23;
    printf("age is %d\n" ,age);
    float pi = 3.14;
    printf("pi is %f\n", pi);
    char hashtag = '#';
    printf("hashtag is %c",hashtag);
        return 0;
}