#include<stdio.h>
#include<locale.h>

int main(void) {
    setlocale(LC_ALL, "Turkish");

    int num;
    int sayac = 1;
    int result = 1;

    printf("Bir say� giriniz: ");
    scanf("%d", &num);

    while(sayac<=num) {
        result *= sayac;
        sayac += 1;
    }

    printf("Fakt�riyel: %d", result);
    return 0;
}