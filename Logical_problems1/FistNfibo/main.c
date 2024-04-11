#include <stdio.h>

int main() {
    int n, f1, f2, f3,count=0;

    printf("how many terms you want ");
    scanf("%d", &n);

    f1 = 0;
    f2 = 1;
    printf("%d %d\t", f1, f2); // Corrected printf usage
    count=3;
    f3 = f1 + f2;
    while (count<= n) {
        printf("%d\t", f3); // Corrected printf usage
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
        count++;
    }

    return 0;
}
