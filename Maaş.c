#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Turkish");
	int saatlik_ucret, toplam_saat, toplam_maas;
	char isim[100];

	printf("Lütfen isminizi giriniz\n");
	scanf("%[^\n]s", &isim);
	printf("Toplam kaç saat çalýþtýnýz(Tam sayý giriniz): ");
	scanf("%d", &toplam_saat);
	printf("1 saatte ne kadar ücret alýyorsunuz? (Kuruþ girmeyiniz): ");
	scanf("%d", &saatlik_ucret);

	toplam_maas = toplam_saat*saatlik_ucret;
	printf("Ýsim: %s", isim);
	printf("\nÖdeme: %d", toplam_maas);
	/* code */
	return 0;
}