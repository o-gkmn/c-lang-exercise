#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Turkish");
    int num1;
    int num2;

    printf("Ýki sayý giriniz");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2) 
        printf("%d sayýsý %d sayýsýndan büyüktür", num1, num2);
    else if(num2 > num1)
        printf("%d sayýsý %d sayýsýndan büyüktür", num2, num1);
    else if(num1 == num2) 
        printf("Ýki sayý birbirine eþittir");
}