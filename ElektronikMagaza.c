#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Turkish");

    int secim, telSecim, iphoneSecim;

    printf("---------------------------------\n");
    printf("------TEKNOLOJÝ MAÐAZASI`NA------\n");
    printf("-----------HOÞ GELDÝNÝZ----------\n");
    printf("---------------------------------\n");

    printf("\nÝstediðiniz ürüne tek týkla ulaþmak mümkün... \n");
    printf("\nÝstediðiniz ürünün yanýnda yazan numarayý kodlayýn ve ürünleri listeleyin....\n");

    printf("\n[1] Cep telefonu\n");
    printf("[2] Bilgisayar\n");
    printf("[3] Oyuncuya özel\n");
    printf("[4] Cep telefonu aksesuarlarý\n");
    printf("[5] Bilgisayar aksesuarlarý\n");
    printf("[6] Akýllý saat ve bileklikler\n");
    printf("[7] Foto ve kamera");
    printf("[8] Tv görüntü ve ses\n");
    printf("\nBir önceki menüye geri dönmek için 0`ý tuþlayýn...\n");

    printf("\nLütfen seçiminizi girin...\n");
    scanf("%d", &secim);

    switch (secim)
    {
    case 1: 
        printf("\n[1]Apple\n[2]Samsung\n[3]Huawei\n[4]Xiaomi");
        printf("\n\nSeçiminizi girin...\n");
        scanf("%d", &telSecim);

        if(telSecim == 1) {
            printf("\n[1]Ýphone 12 Mini\n[2]Ýphone 12\n[3]Ýphone 12 Pro");
            printf("\n\nSeçiminini yapýn... ");
            scanf("%d", &iphoneSecim); 
            switch (iphoneSecim)
            {
            case 1:
                printf("\n\nEkran Boyutu: 5.4 Ýnç\nBatarya Kapasitesi: 2227 mAh\nYonga Seti (Chipset): Apple A14 Bionic\n");
                printf("CPU Çekirdeði: 6 Çekirdek\nÝþlemci Mimarisi: 64-bit\nGrafik Ýþlemcisi (GPU): Apple Quad-Core\n");
                printf("CPU Üretim Teknolojisi: 5 nm\nBellek (RAM): 4 GB\nDahili Depolama: 64 GB\nÖn Kamera Çözünürlüðü: 12 MP");
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
            printf("Hay aksi! Hatalý giriþ yaptýnýz");
        break;

    case 2:
        printf("Tebrikler bir bilgisayar satýn aldýnýz");
        break;
    case 3:
        printf("Tebrikler bir oyuncuya özel ürün satýn aldýnýz");
        break;
    case 4:
        printf("Tebrikler bir cep telefonu aksesuarý ürünü satýn aldýnýz");
        break;
    case 5:
        printf("Tebrikler bir bilgisayar aksesuarý ürünü satýn aldýnýz");
        break;
    case 6:
        printf("Tebrikler bir akýllý saat ve bileklik ürünü satýn aldýnýz");
        break;
    case 7:
        printf("Tebrikler bir foto ve kamera ürünü satýn aldýnýz");
        break;
    case 8:
        printf("Tebrikler bir tv görüntü ve ses ürünü satýn aldýnýz");
        break;
    default:
        printf("Seçiminizde bir yanlýþlýk olmalý...");
        break;
    }



    return 0;
}