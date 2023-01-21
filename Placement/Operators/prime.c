#include <stdio.h>
int PrimeN(int n);
int main() {
    int n1, n2, i, prime;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) {

        // prime will be equal to 1 if i is prime
        prime = PrimeN(i);

        if (prime == 1)
            printf("%d ", i);
    }
    return 0;
}

// user-defined function to check prime number
int PrimeN(int n) {
    int j, prime = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}