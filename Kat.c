#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int carpim;
    int i = 1;
    int n = 0;

    while(n != -1) {

        printf("5'in ka��nc� kat�n� hesaplmak istiyorsunuz: ");
        scanf("%d", &n);

        if(n == -1){
            break;
        }

        carpim = 5*n;
        printf("�arp�m: %d\n", carpim);
    }
    return 0;
}