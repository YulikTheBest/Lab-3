#include <stdio.h>
#include <math.h>

int main() {
    double x, f;

    printf("Введіть дійсне число x: ");
    scanf("%lf", &x);
    // з використанням скороченої форми оператора розгалуження if
    if (x > 0) 
        f = x * x + 5 * x - 6; 
    if (x <= 0)
        f = fabs(x + cos(x));

    printf("Значення функції f(x): %.2lf\n", f);

    return 0;
}
