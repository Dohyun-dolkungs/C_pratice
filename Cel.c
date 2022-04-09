#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper ,step;

    lower = 0;
    upper =300;
    step = 10;
    printf("C-celsius to F-celsius\n");
    celsius = lower;
    while(celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}