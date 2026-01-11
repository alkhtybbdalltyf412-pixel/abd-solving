#include <stdio.h>
#include <math.h> //

int main() {
    float x;
    if (scanf("%f", &x) != 1) {
        printf("n/a\n");
        return 0;
    }

    if (x == 0) {
        printf("n/a\n");
        return 0;
    }


    float y = 7e-3 * pow(x, 4) +
              ((22.8 * pow(x, 1.0/3.0) - 1e3) * x + 3) / (x * x / 2.0) -
              x * pow(10 + x, 2.0 / x) -
              1.01;

   
    printf("%.1f\n", y);

    return 0;
}
