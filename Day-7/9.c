#include <stdio.h>

int main() {
    int n, v1 = 0, v2 = 1, v3;

    printf("Enter the number of Fibonacci numbers: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i <= n; ++i) {
        printf("%d, ", v1);
        v3 = v1 + v2;
        v1 = v2;
        v2 = v3;
    }
}