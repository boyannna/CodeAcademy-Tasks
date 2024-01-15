#include<stdio.h>

const double gPi = 3.14;

double area(int r)
{
    return r*r*gPi;
}
int main() {
    int r = 0;
    printf("Enter radius : ");
    scanf_s("%d", &r);
    printf("%.2lf", area(r));
    return 0;
}