#include <stdio.h>
#include <stdlib.h>

int main() {
    int min, max, n, r, sum, armstrong, i;
    printf("Enter the minimum and maximum value: ");
    scanf("%d %d", &min, &max);

    for (i = min; i <= max; i++) {
        n = i;
        armstrong = n;
        sum = 0; // Reset sum for each number
        while (n != 0) {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        if (sum == armstrong) {
            printf("%d\n", sum);
        }
    }

    return 0;
}
