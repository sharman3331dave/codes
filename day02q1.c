#include <stdio.h>
int main() {
    
    float length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\nArea of rectangle = %.2f", area);
    printf("\nPerimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
