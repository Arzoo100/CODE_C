#include <stdio.h>

int main() {
    int n, f1, f2, f3;

    printf("Enter till what term you want series: ");
    scanf("%d", &n);

    f1 = 0;
    f2 = 1;
    printf("%d %d\t", f1, f2); // Corrected printf usage

    f3 = f1 + f2;
    while (f3 <= n) {
        printf("%d\t", f3); // Corrected printf usage
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

    return 0;
}
