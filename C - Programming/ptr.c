#include<stdio.h>

int main() {
    int age = 2 ;
    int *ptr = &age ;
    int s = *ptr;

    printf ("%d\n", s);
    return 0;
}