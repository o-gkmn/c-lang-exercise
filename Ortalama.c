#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int toplam = 0;

    while(sayi!=-1){

        printf("0-100 aras� bir say� girin: ");
        scanf("%d\n", &sayi);
        
        if(sayi<=0 && sayi>=100){
            printf("Ge�erli bir say� giriniz\n");
            continue;
        }
        toplam += sayi;
    }

    printf("Toplam: %d\n", toplam+1);
    return 0;
}