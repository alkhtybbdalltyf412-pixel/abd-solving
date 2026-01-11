#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int main() {
    float f1, f2;

    if (scanf("%f %f", &f1, &f2) != 2) {
        printf("n/a\n");
        return 0;
    }

    if ((int)f1 != f1 || (int)f2 != f2) {
        printf("n/a\n");
        return 0;
    }

    int x = (int)f1;
    int y = (int)f2;

    printf("%d\n", max(x, y));

    return 0;
}