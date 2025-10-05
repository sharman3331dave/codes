#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int largest;

    if (a > b) {
        if (a > c)
            largest = a;
        else
            largest = c;
    } else {
        if (b > c)
            largest = b;
        else
            largest = c;
    }

    printf("Largest is %d\n", largest);
    return 0;
}
