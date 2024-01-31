#include <stdio.h>
int main() {
    double a, b, sum;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    sum = a * b;

    // %.2lf displays number up to  decimal point
    printf("Sum = %.2lf", sum);
    
    return 0;
}

