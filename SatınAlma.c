#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Turkish");
	float fiyat, vergiOrani, indirimOrani;

	printf("�r�n�n fiyat�n� giriniz: ");
	scanf("%f", &fiyat);
	printf("\n�ndirim y�desini giriniz: ");
	scanf("%f", &indirimOrani);
	printf("\nVergi y�desini giriniz: ");
	scanf("%f", &vergiOrani);

	float indirim, vergi;
	indirim = fiyat*indirimOrani/100;
	fiyat = fiyat - indirim;
	vergi = fiyat*vergiOrani/100;
	fiyat = fiyat + vergi;

	printf("L�tfen %f TL �deyiniz\n", fiyat);
	return 0;
}