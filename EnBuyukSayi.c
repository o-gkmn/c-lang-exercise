#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Turkish");
    int num1;
    int num2;

    printf("�ki say� giriniz");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2) 
        printf("%d say�s� %d say�s�ndan b�y�kt�r", num1, num2);
    else if(num2 > num1)
        printf("%d say�s� %d say�s�ndan b�y�kt�r", num2, num1);
    else if(num1 == num2) 
        printf("�ki say� birbirine e�ittir");
}