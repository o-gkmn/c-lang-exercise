#include <stdio.h>
#include <locale.h>>

int main() {
    setlocale(LC_ALL, "Turkish");
    int sayac = 1;

    while(sayac<=10) {
        printf("Hello world\n");
        sayac +=1;
    }

    printf("For d�ng�s�ne ge�iyorum\n");
    for(int i=1; i<=10; i++) {
        printf("Hello World\n");
    }

    return 0;
}