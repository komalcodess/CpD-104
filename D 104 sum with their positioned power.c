#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int sumPowerDigits(int n, int pos) {
    if (n == 0)
        return 0;
    return power(n % 10, pos) + sumPowerDigits(n / 10, pos - 1);
}

int main() {
    int n = 123;
    printf("Result = %d", sumPowerDigits(n, 3));
    return 0;
}
