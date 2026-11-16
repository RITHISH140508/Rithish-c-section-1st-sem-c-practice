#include <stdio.h>
#include <math.h>
int main() {
    double P, R, T, amount, ci;
    scanf("%lf %lf %lf", &P, &R, &T);
    amount = P * pow(1 + R / 100, T);
    ci = amount - P;
    printf("Compound interest: %.2lf\n", ci);
    printf("Amount: %.2lf\n", amount);
    return 0;
}

