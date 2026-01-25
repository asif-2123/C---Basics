#include <stdio.h>
int sumofDigits(int n) {
    if (n==0) {
        return 0 ;        
    }
    return (n % 10) + sumofDigits(n / 10);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of is :%d\n", sumofDigits(n));
    return 0;
}