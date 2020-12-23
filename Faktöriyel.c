#include<stdio.h>
#include<locale.h>

int main(void) {
    setlocale(LC_ALL, "Turkish");

    int num;
    int sayac = 1;
    int result = 1;

    printf("Bir sayý giriniz: ");
    scanf("%d", &num);

    while(sayac<=num) {
        result *= sayac;
        sayac += 1;
    }

    printf("Faktöriyel: %d", result);
    return 0;
}