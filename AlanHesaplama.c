#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    char sec = 'A';
    int kareKenar;
    int alanKare;
    int kisaKenar;
    int uzunKenar;
    int dikdortgenAlan;
    int tabanUzunluk;
    int yukseklik;
    int ucgenAlan;

    while(sec != '*'){
        printf("Karenin alan�n� hesaplamak i�in K\n");
        printf("Dikd�rtgenin alan�n� hesaplamak i�in D\n");
        printf("��genin alan�n� hesaplamak i�in U harfini giriniz.\n");
        scanf(" %c", &sec);
        
        if(sec == 'K' || sec == 'k'){
            printf("Karenin bir kenar�n� giriniz: \n");
            scanf("%d", &kareKenar);

            alanKare = kareKenar*kareKenar;
            printf("Alan: %d\n", alanKare);
            continue;
        }

        else if(sec == 'D' || sec == 'd'){
            printf("Dikd�rtgenin k�sa kenar� giriniz: \n");
            scanf("%d", &kisaKenar);

            printf("Dikd�rtgenin uzun kenar�n� giriniz: \n");
            scanf("%d", &uzunKenar);

            dikdortgenAlan = uzunKenar * kisaKenar;
            printf("Alan: %d\n", dikdortgenAlan);
            continue;
        }

        else if(sec == 'U' || sec == 'u'){
            printf("��genin taban uzunlu�unu girin: \n");
            scanf("%d", &tabanUzunluk);

            printf("��genin y�ksekli�ini giriniz: \n");
            scanf("%d", &yukseklik);

            ucgenAlan = tabanUzunluk * yukseklik / 2;
            printf("Alan: %d\n", ucgenAlan);
            continue;
        }
    }
    return 0;
}