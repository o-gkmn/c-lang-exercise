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
        printf("%d. say�y� giriniz: ", i+1);
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

    printf("Say�lar�n�z�n toplam� %d\n", toplam);
    printf("Say�lar�n ortlamas� %.2f\n", ortalama);
    printf("20'den b�y�k say�lar %d\n", sayac);
    printf("20'den b�y�k ve 60'tan k���k say�lar %d\n", sayac1);
    printf("En b�y�k say� %d", enBuyuk);

    return 0;
}