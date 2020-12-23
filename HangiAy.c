#include <stdio.h>

int main()
{
int ay;
printf("Hangi ayda oldugumuzu giriniz.");
scanf("%d", &ay);

switch (ay)
{
case 1 ... 2: printf("Kýþ"); break;
case 3 ... 5: printf("Bahar"); break;
case 6 ... 8: printf("Yaz"); break; 
case 9 ... 11: printf("Sonbahar"); break;
case 12: printf("Kýþ"); break;
default :
printf("Geçerli ay giriniz.");

};
return 0;
}