#include<stdio.h>
void swap ( int *a , int *b ) ;

int main () {
    int x = 7 , y =0 ;
    swap( &x , &y ) ;
    printf (" swap: x = %d , y = %d\n", x , y ) ;
}
void swap ( int *a , int *b) {
    int t = *a ;
    *a = *b ;
    *b = t ;

}