#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int sayac;
    int sayi;
    int result = 0;
    
    printf("Kaç sayý gireceksini?\n");
    scanf("%d", &sayac);

    for(int i = 1; i<=sayac; i++) {
        printf("%d. sayýnýzý girin...\n", i);
        scanf("%d", &sayi);
        result += sayi;
    }

    printf("Girdiðiniz sayýlarýn ortalamasý: %.2f", (float)result/sayac);
    return 0;
}