#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Turkish");
	int saatlik_ucret, toplam_saat, toplam_maas;
	char isim[100];

	printf("L�tfen isminizi giriniz\n");
	scanf("%[^\n]s", &isim);
	printf("Toplam ka� saat �al��t�n�z(Tam say� giriniz): ");
	scanf("%d", &toplam_saat);
	printf("1 saatte ne kadar �cret al�yorsunuz? (Kuru� girmeyiniz): ");
	scanf("%d", &saatlik_ucret);

	toplam_maas = toplam_saat*saatlik_ucret;
	printf("�sim: %s", isim);
	printf("\n�deme: %d", toplam_maas);
	/* code */
	return 0;
}