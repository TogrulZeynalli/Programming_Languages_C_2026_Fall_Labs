#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: n must be >= 0.\n");
        return 1;
    }

    long long result = factorial(n);
    printf("%d! = %lld\n", n, result);

    return 0;
}