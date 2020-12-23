#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Turkish");
	float fiyat, vergiOrani, indirimOrani;

	printf("Ürünün fiyatýný giriniz: ");
	scanf("%f", &fiyat);
	printf("\nÝndirim yüdesini giriniz: ");
	scanf("%f", &indirimOrani);
	printf("\nVergi yüdesini giriniz: ");
	scanf("%f", &vergiOrani);

	float indirim, vergi;
	indirim = fiyat*indirimOrani/100;
	fiyat = fiyat - indirim;
	vergi = fiyat*vergiOrani/100;
	fiyat = fiyat + vergi;

	printf("Lütfen %f TL ödeyiniz\n", fiyat);
	return 0;
}