#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    float D = a * e - b * d, Dx = c * e - b * f, Dy = a * f - c * d;

    if (D != 0)
        printf("x = %.2f, y = %.2f\n", Dx / D, Dy / D);
    else
        printf("%s\n", (Dx == 0 && Dy == 0) ? "vo so nghiem" : "vo nghiem");

    return 0;
}
