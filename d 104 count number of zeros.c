#include <stdio.h>

int countZeros(int n) {
    if (n == 0)
        return 0;
    if (n % 10 == 0)
        return 1 + countZeros(n / 10);
    return countZeros(n / 10);
}

int main() {
    int n = 10203040;
    printf("Number of zeros = %d", countZeros(n));
    return 0;
}
