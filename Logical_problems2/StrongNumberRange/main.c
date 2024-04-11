#include<stdio.h>

int main() {
    int min, max, n, r, fact, sum, strong, j;

    printf("Enter your min and max value: ");
    scanf("%d%d", &min, &max);

    for (int i = min; i <= max; i++) {
        n = i;
        strong = n;
        sum = 0;

        while (n != 0) {
            r = n % 10;
            fact = 1;
            for (j = 1; j <= r; j++) {
                fact *= j;
            }
            sum += fact;
            n = n / 10;
        }

        if (strong == sum) {
            printf("%d is a strong number\n", strong);
        }
    }

    return 0;
}
