#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Turkish");
	int radius, field;
	printf("Lütfen dairenin yarýçapýný giriniz: ");
	scanf("%d", &radius);

	field = 3*radius*radius;
	printf("Dairenin alaný: %d", field);
	return 0;
}