#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    return 1; // placeholder
}

int main(void) {
    int n;
<<<<<<< HEAD
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: n must be >= 0.\n");
        return 1;
    }

    long long result = factorial(n);
    printf("%d! = %lld\n", n, result);

    return 0;
}
=======

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, print result

    return 0;
}
>>>>>>> 73e85dd7badd5ca11c4fde22ce74eab235923355
