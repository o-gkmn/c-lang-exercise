#include <stdio.h>

int main()
{
int i, j;

for (i=0;i<=10;i++) // satir
{
    for (j=0;j<=5;j++) //s�tun
    {
        if( (j==0)||(j==5)||(i==0)||(i==10))
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}

return 0;
}