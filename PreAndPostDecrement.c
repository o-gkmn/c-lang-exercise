#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Turkish");
    int sayi;
    
    printf("L�tfen bir say� giriniz...");
    scanf("%d", &sayi);

    printf("%d say�n�za ", sayi);
    printf("preidecrement i�lemi uyguland���nda %d say�s�n� ", --sayi);
    printf("postdecrement i�lemi uyguland���nda %d say�s�n� elde ettiniz.", sayi--);
}