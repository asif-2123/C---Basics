#include <stdio.h>
int main () {
    int x , y , z ;
    printf ("Enter three numbers:\n") ;
    scanf ("%d %d %d", &x, &y, &z);
    printf ("Average: %f\n", (x + y + z)/3.0);
    return 0;
}