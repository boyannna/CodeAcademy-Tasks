//Task1
//Изведете размерите в байтове и битове на основните типове на вашата машина
//char, int, short, long, long long, size_t, float, double, bool

#include<stdio.h>
#include<limits.h>

int main()
{
    printf("char in bytes: %d\n", sizeof(char));
    printf("char in bits: %d\n", sizeof(char) * CHAR_BIT);

    size_t sizeInt = sizeof(int);
    printf("int in bytes: %d\n", sizeInt);
    printf("int in bits: %d\n", sizeInt * CHAR_BIT);

    printf("short in bytes: %d\n", sizeof(short));
    printf("short in bits: %d\n", sizeof(short) * CHAR_BIT);

    printf("long in bytes: %d\n", sizeof(long));
    printf("long in bits: %d\n", sizeof(long) * CHAR_BIT);

    printf("long long in bytes: %d\n", sizeof(long long));
    printf("long long in bits: %d\n", sizeof(long long) * CHAR_BIT);

    printf("size_t in bytes: %d\n", sizeof(size_t));
    printf("size_t in bits: %d\n", sizeof(size_t) * CHAR_BIT);

    printf("float in bytes: %d\n", sizeof(float));
    printf("float in bits: %d\n", sizeof(float) * CHAR_BIT);

    printf("double in bytes: %d\n", sizeof(double));
    printf("double in bits: %d\n", sizeof(double) * CHAR_BIT);
    
    //printf("bool in bytes: %d\n", sizeof(bool));
    //printf("bool in bits: %d\n", sizeof(bool) * CHAR_BIT);

    return 0;
}