#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Turkish");
	int radius, field;
	printf("L�tfen dairenin yar��ap�n� giriniz: ");
	scanf("%d", &radius);

	field = 3*radius*radius;
	printf("Dairenin alan�: %d", field);
	return 0;
}