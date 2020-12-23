#include<stdio.h>
#include<locale.h>
#define BOYUT 10

int main(void) {
    setlocale(LC_ALL, "Turkish");

    int sayilar[BOYUT];
    int toplam;
    int sayac = 0;
    int sayac1 = 0;
    int enBuyuk = 0;
    float ortalama;

    for(int i = 0; i<10; i++) {
        printf("%d. sayýyý giriniz: ", i+1);
        scanf("%d", &sayilar[i]);

        toplam += sayilar[i];

        if(sayilar[i]>20){
            sayac+=1;
        }

        if(sayilar[i]>20 && sayilar[i]<60){
            sayac1+=1;
        }

        if(sayilar[i]>enBuyuk) {
            enBuyuk = sayilar[i];
        }
    }

    ortalama = (float)toplam / (float)BOYUT;

    printf("Sayýlarýnýzýn toplamý %d\n", toplam);
    printf("Sayýlarýn ortlamasý %.2f\n", ortalama);
    printf("20'den büyük sayýlar %d\n", sayac);
    printf("20'den büyük ve 60'tan küçük sayýlar %d\n", sayac1);
    printf("En büyük sayý %d", enBuyuk);

    return 0;
}