#include "main.h"

int is_prime_recursive(int n, int divisor) {
    if (n <= 1)
        return 0;
    else if (n <= 3)
        return 1;
    else if (n % 2 == 0 || n % 3 == 0)
        return 0;

    if (divisor * divisor > n)
        return 1;

    if (n % divisor == 0 || n % (divisor + 2) == 0)
        return 0;

    return is_prime_recursive(n, divisor + 6);
}
