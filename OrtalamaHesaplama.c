#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int sayac;
    int sayi;
    int result = 0;
    
    printf("Ka� say� gireceksini?\n");
    scanf("%d", &sayac);

    for(int i = 1; i<=sayac; i++) {
        printf("%d. say�n�z� girin...\n", i);
        scanf("%d", &sayi);
        result += sayi;
    }

    printf("Girdi�iniz say�lar�n ortalamas�: %.2f", (float)result/sayac);
    return 0;
}