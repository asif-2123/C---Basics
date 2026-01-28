#include <stdio.h>

int main()
{
    for (int i=1;i<=5;i++)
    {
        for(int j=0;j<i;j++)
            printf("%c ", i+j+64);
        printf("\n");
    }
    return 0;
}


