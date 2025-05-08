#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    if (a == b) {
        printf("%d and %d are a good pair\n", a, b);
    } else {
        printf("%d and %d are not a good pair\n", a, b);
    }

    return 0;
}

