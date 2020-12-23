#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int sayac = 0;
    int result = 0;
    int sayi = 0;
    
    printf("Çýkmak için -1 sayýsýný girin...\n");

    while(sayi != -1) {    
        printf("Sayýnýzý girin... ");
        scanf("%d", &sayi);
        result += sayi;
        sayac += 1;
    }

    printf("\nOrtalama: %.2f", (float)(result+1)/(sayac-1));
    return 0;
}