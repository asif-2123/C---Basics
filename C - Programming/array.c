#include <stdio.h>

int main () {
    int marks [3];
    printf("Enter marks of math: \n");
    scanf("%d", &marks[0]);
    printf("Enter marks of physics: \n");
    scanf("%d", &marks[1]);
    printf("Enter marks of chemistry: \n");
    scanf("%d", &marks[2]); 

    printf("mark is ; %d %d %d\n", marks[0], marks[1], marks[2]);
}