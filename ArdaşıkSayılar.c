#include<stdio.h>
#include<locale.h>

int main()  {
    setlocale(LC_ALL, "Turkish");

    for(int i = 20; i>=-15; i-=7) {
        printf("%d\n", i);
    }
    return 0;
}