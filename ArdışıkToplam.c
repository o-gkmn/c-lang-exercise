#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int sayac;
    int toplam;

    sayac = 1;
    toplam = 0;

    while(sayac<=10) {
        toplam += sayac;
        sayac++;
    }
    printf("Toplam sayý: %d", toplam);
    return 0;
}