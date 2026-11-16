#include <stdio.h>
#include <math.h>

int main() {
    double P, R, amount, compound_interest;
    int T;

    // Read Principal (P), Rate (R), and Time in years (T)
    if (scanf("%lf %lf %d", &P, &R, &T) == 3) {
        // Calculate final amount: P * (1 + R / 100)^T
        amount = P * pow((1.0 + R / 100.0), T);
        
        // Calculate compound interest: Amount - P
        compound_interest = amount - P;

        // Print results rounded to two decimal places
        printf("Compound interest: %.2f\n", compound_interest);
        printf("Amount: %.2f\n", amount);
    }

    return 0;
}
