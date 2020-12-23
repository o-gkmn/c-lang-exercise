#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Turkish");
    int sayi;
    
    printf("Lütfen bir sayý giriniz...");
    scanf("%d", &sayi);

    printf("%d sayýnýza ", sayi);
    printf("preincrement iþlemi uygulandýðýnda %d sayýsýný ", ++sayi);
    printf("postincrement iþlemi uygulandýðýnda %d sayýsýný elde ettiniz.", sayi++);
}