#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Turkish");
	int kisaKenar, uzunKenar, alan;
	kisaKenar = 5;
	uzunKenar = 10;
	alan = kisaKenar*uzunKenar;
	printf("Dikdörtgenin alaný: %d", alan);
	return 0;
}