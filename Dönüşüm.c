#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Turkish");
	int feet, inc, toplam_inc;
	float santimetre;

	printf("L�tfen feet de�erini giriniz: ");
	scanf("%d", &feet);
	printf("\nL�tfen int de�erini giriniz: ");
	scanf("%d", &inc);

	toplam_inc = 12*feet+inc;
	santimetre = 2.54*toplam_inc;

	printf("%d feet %d inc= ", feet, inc);
	printf("%f santimetre", santimetre);
	return 0;
}