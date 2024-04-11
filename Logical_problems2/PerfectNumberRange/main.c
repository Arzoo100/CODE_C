#include <stdio.h>

int main() {
    int min, max, n, i, j, sum;

    printf("Enter the min and max value: ");
    scanf("%d%d", &min, &max);

    for (i = min; i <= max; i++) {
        n = i;
        sum = 0;

        for (j = 1; j <= n / 2; j++) {
            if (n % j == 0)
                sum += j;
        }

        if (n == sum)
            printf("It is a perfect number: %d\n", n);
        else
            printf("It is not a perfect number: %d\n", n);
    }

    return 0;
}
