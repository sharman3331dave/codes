#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit, digitsCount = 0;
    

    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;

    while (temp != 0) {
        temp /= 10;
        digitsCount++;
    }

    firstDigit = num / (int)pow(10, digitsCount - 1);
    lastDigit = num % 10;
    

    temp = num - (firstDigit * (int)pow(10, digitsCount - 1));
    temp += (lastDigit * (int)pow(10, digitsCount - 1));
    temp -= lastDigit;
    temp += firstDigit;
    
    printf("Number with first and last digits swapped: %d\n", temp);
    
    return 0;
}