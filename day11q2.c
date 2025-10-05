#include <stdio.h>

int main() {
    float costPrice, sellingPrice, diff, percent;
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        diff = sellingPrice - costPrice;
        percent = (diff / costPrice) * 100;
        printf("Profit %.0f%%\n", percent);
    } else if (sellingPrice < costPrice) {
        diff = costPrice - sellingPrice;
        percent = (diff / costPrice) * 100;
        printf("Loss %.0f%%\n", percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
