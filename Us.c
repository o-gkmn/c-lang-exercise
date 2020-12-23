#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Turkish");
    
    int us = 0;
    int sonuc = 1;
    

    while(us != -1) {
        printf("2'nin kaçýncý üssünü hesaplamak istiyorsunuz: ");
        scanf("%d", &us);

        for(int i = 1; i<=us; i++){
            sonuc *= 2;
        }
        printf("Sonuç: %d\n", sonuc);
        sonuc = 1;
    }
    return 0;
}