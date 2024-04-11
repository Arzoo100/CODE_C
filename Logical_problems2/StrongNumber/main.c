#include<stdio.h>

int main() {
    int n, r, fact, sum = 0, strong;

    printf("Enter the number: ");
    scanf("%d", &n);

    strong = n;
    while (n != 0) {
        r = n % 10;
        fact = 1;
        for (int i = 1; i <= r; i++)
            {
            fact *= i;
        }
        sum += fact;
        n = n / 10;
    }

    if (strong == sum)
        printf("The number is a strong number: %d\n", sum);
    else
        printf("The number is not a strong number.\n");

    return 0;
}
