#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sumOfProperDivisors(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int areAmicablePair(int num1, int num2) {
    if (sumOfProperDivisors(num1) == num2 && sumOfProperDivisors(num2) == num1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num1, num2;
    printf("Enter the First number: ");
    scanf("%d", &num1);
    printf("Enter the Second number: ");
    scanf("%d", &num2);

    if (areAmicablePair(num1, num2)) {
        printf("%d and %d are an amicable pair.\n", num1, num2);
    } else {
        printf("%d and %d are not an amicable pair.\n", num1, num2);
    }
    return 0;
}