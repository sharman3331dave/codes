#include <stdio.h>

int main() {
    int days;
    int fine = 0;
    
    scanf("%d", &days);
    
    if (days > 30) {
        printf("Membership Cancelled\n");
        return 0;
    }
    
    if (days <= 5) {
        fine = days * 2;
    } else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
    } else {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    }
    
    printf("Fine ₹%d\n", fine);
    
    return 0;
}
