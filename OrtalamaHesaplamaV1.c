#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int sayac = 0;
    int result = 0;
    int sayi = 0;
    
    printf("��kmak i�in -1 say�s�n� girin...\n");

    while(sayi != -1) {    
        printf("Say�n�z� girin... ");
        scanf("%d", &sayi);
        result += sayi;
        sayac += 1;
    }

    printf("\nOrtalama: %.2f", (float)(result+1)/(sayac-1));
    return 0;
}