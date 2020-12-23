#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int toplam = 0;

    while(sayi!=-1){

        printf("0-100 arasý bir sayý girin: ");
        scanf("%d\n", &sayi);
        
        if(sayi<=0 && sayi>=100){
            printf("Geçerli bir sayý giriniz\n");
            continue;
        }
        toplam += sayi;
    }

    printf("Toplam: %d\n", toplam+1);
    return 0;
}