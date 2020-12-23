#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Turkish");

    int secim, telSecim, iphoneSecim;

    printf("---------------------------------\n");
    printf("------TEKNOLOJ� MA�AZASI`NA------\n");
    printf("-----------HO� GELD�N�Z----------\n");
    printf("---------------------------------\n");

    printf("\n�stedi�iniz �r�ne tek t�kla ula�mak m�mk�n... \n");
    printf("\n�stedi�iniz �r�n�n yan�nda yazan numaray� kodlay�n ve �r�nleri listeleyin....\n");

    printf("\n[1] Cep telefonu\n");
    printf("[2] Bilgisayar\n");
    printf("[3] Oyuncuya �zel\n");
    printf("[4] Cep telefonu aksesuarlar�\n");
    printf("[5] Bilgisayar aksesuarlar�\n");
    printf("[6] Ak�ll� saat ve bileklikler\n");
    printf("[7] Foto ve kamera");
    printf("[8] Tv g�r�nt� ve ses\n");
    printf("\nBir �nceki men�ye geri d�nmek i�in 0`� tu�lay�n...\n");

    printf("\nL�tfen se�iminizi girin...\n");
    scanf("%d", &secim);

    switch (secim)
    {
    case 1: 
        printf("\n[1]Apple\n[2]Samsung\n[3]Huawei\n[4]Xiaomi");
        printf("\n\nSe�iminizi girin...\n");
        scanf("%d", &telSecim);

        if(telSecim == 1) {
            printf("\n[1]�phone 12 Mini\n[2]�phone 12\n[3]�phone 12 Pro");
            printf("\n\nSe�iminini yap�n... ");
            scanf("%d", &iphoneSecim); 
            switch (iphoneSecim)
            {
            case 1:
                printf("\n\nEkran Boyutu: 5.4 �n�\nBatarya Kapasitesi: 2227 mAh\nYonga Seti (Chipset): Apple A14 Bionic\n");
                printf("CPU �ekirde�i: 6 �ekirdek\n��lemci Mimarisi: 64-bit\nGrafik ��lemcisi (GPU): Apple Quad-Core\n");
                printf("CPU �retim Teknolojisi: 5 nm\nBellek (RAM): 4 GB\nDahili Depolama: 64 GB\n�n Kamera ��z�n�rl���: 12 MP");
                break;
            default:
                break;
            }}    
        else if(telSecim == 2)
            printf("\n[1]Samsung Galaxy S20\n[2]Samsung Galaxy S20+\n[3]Samsung Galaxy S20 Ultra");
        else if(telSecim == 3)
            printf("\n[1]Huawei P40 Pro\n[2]Huawei Mate 40 Pro\n[3]Huawei P40");
        else if(telSecim == 4)
            printf("\n[1]Mi 10\n[2]Mi 10T\n[3]Mi 10T Pro");
        else
            printf("Hay aksi! Hatal� giri� yapt�n�z");
        break;

    case 2:
        printf("Tebrikler bir bilgisayar sat�n ald�n�z");
        break;
    case 3:
        printf("Tebrikler bir oyuncuya �zel �r�n sat�n ald�n�z");
        break;
    case 4:
        printf("Tebrikler bir cep telefonu aksesuar� �r�n� sat�n ald�n�z");
        break;
    case 5:
        printf("Tebrikler bir bilgisayar aksesuar� �r�n� sat�n ald�n�z");
        break;
    case 6:
        printf("Tebrikler bir ak�ll� saat ve bileklik �r�n� sat�n ald�n�z");
        break;
    case 7:
        printf("Tebrikler bir foto ve kamera �r�n� sat�n ald�n�z");
        break;
    case 8:
        printf("Tebrikler bir tv g�r�nt� ve ses �r�n� sat�n ald�n�z");
        break;
    default:
        printf("Se�iminizde bir yanl��l�k olmal�...");
        break;
    }



    return 0;
}