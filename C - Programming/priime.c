//print all prime numbers in a range 
#include <stdio.h>
#include <math.h>
int main (){
    int start , end , i , j , isPrime;
    printf("Enter start :");
    scanf("%d",&start);
    printf("Enter end :");
    scanf("%d",&end);
    printf("Prime numbers between %d and %d are: \n", start , end);
    for(i=start ; i<=end ; i++){
        if(i<=0){
            continue;
        }
        isPrime = 1 ;
        for (j=2 ; j <i-1 ; j++){
            if (i%j==0){
                isPrime = 0 ;
                break;
            }
        }
        if (isPrime){
            printf("%d ", i);
        }
    }
    
    
}