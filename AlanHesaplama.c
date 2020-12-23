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
        printf("Karenin alanýný hesaplamak için K\n");
        printf("Dikdörtgenin alanýný hesaplamak için D\n");
        printf("Üçgenin alanýný hesaplamak için U harfini giriniz.\n");
        scanf(" %c", &sec);
        
        if(sec == 'K' || sec == 'k'){
            printf("Karenin bir kenarýný giriniz: \n");
            scanf("%d", &kareKenar);

            alanKare = kareKenar*kareKenar;
            printf("Alan: %d\n", alanKare);
            continue;
        }

        else if(sec == 'D' || sec == 'd'){
            printf("Dikdörtgenin kýsa kenarý giriniz: \n");
            scanf("%d", &kisaKenar);

            printf("Dikdörtgenin uzun kenarýný giriniz: \n");
            scanf("%d", &uzunKenar);

            dikdortgenAlan = uzunKenar * kisaKenar;
            printf("Alan: %d\n", dikdortgenAlan);
            continue;
        }

        else if(sec == 'U' || sec == 'u'){
            printf("Üçgenin taban uzunluðunu girin: \n");
            scanf("%d", &tabanUzunluk);

            printf("Üçgenin yüksekliðini giriniz: \n");
            scanf("%d", &yukseklik);

            ucgenAlan = tabanUzunluk * yukseklik / 2;
            printf("Alan: %d\n", ucgenAlan);
            continue;
        }
    }
    return 0;
}