#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the n value: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
        {
        if (n % i == 0)
            sum += i;
    }

    if (n == sum)
        printf("It is a perfect number: %d\n", n);
    else
        printf("It is not a perfect number: %d\n", n);

    return 0;
}
