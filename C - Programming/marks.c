#include <stdio.h>
int main()
{
    float marks ;
    printf("Enter your marks: ");
    scanf("%f", &marks);
    if(marks>=90 && marks<=100) {
        printf("Grade A+");
    }else if(marks<90 && marks>=70) {
        printf("Grade A");
    }else if(marks<70 && marks>=30) {
        printf("Grade B");
    }else {
        printf("Grade C");
    }
    return 0;
}