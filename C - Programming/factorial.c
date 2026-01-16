#include <stdio.h>
/*int main() {
    int x=1;
    if(x=0){
        printf("True\n");
    }else{
        printf("False\n");  
    }
    return 0;
} */
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact = 1 ;
    for (int i = n ; i>=1 ; i--){
        fact = fact * i ;
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
    
}
