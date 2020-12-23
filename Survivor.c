/*author: ozgur*/
#include<stdio.h>
#include<locale.h>

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "Turkish");

    printf("###############################\n");
    printf("    Survivor`a hoþ geldiniz\n");
    printf("###############################\n\n");
    printf("Oyunu kazanabilmek için 30 gün boyunca saðlýk barýnýn 10`un altýna düþmemesi lazým.\n");

    int barAclik = 100;
    int barSaglik = 100;
    int gun = 1;
    int et = 1;
    int patates = 3;
    int salata = 5;
    int yumurta = 3;

    char yemek;

    while(gun<=30) {
        printf("####################################################");
        printf("\nSaðlýk: %d Açlýk: %d Gün: %d\n\n", barSaglik, barAclik, gun);
        printf("Bugün ne yemek isterdiniz? \n>>>Et(+30 saðlýk ve +75 açlýk)\n>>>Patates(+15 saðlýk ve +5 açlýk)");
        printf("\n>>>Salata(+35 saðlýk ve -10 açlýk)\n>>>Yumurta(+25 saðlýk ve -5 açlýk)\n\n");

        printf("---- Yemek stoklarý -----\n");
        printf("Et: %d\n", et);
        printf("Patates: %d\n", patates);
        printf("Salata: %d\n", salata);
        printf("Yumurta: %d\n", yumurta);
        printf("\nEt için \"E\"\nPatates için \"P\"\n");
        printf("Salata için \"S\"\nYumurta için \"Y\" harfini tuþlayýn\n");
        
        printf("Eðer yemek yemek istemiyorsanýz q tuþuna týklayýn.\n");
        scanf(" %c", &yemek);

        if(yemek == 'E' || yemek == 'e') {  /*Et için saðlýk ve açlýk barýnýn nasýl þekilleneceðini ayarladým.*/
            if(et<=0) {  /*Eðer kalan et sayýsý sýfýra eþit yada küçükse daha fazla et tüketemiyor*/
                printf("Daha fazla et alamazsýnýz\n");
                continue;
            }
            barSaglik += 30;
            barAclik += 75;
            et -=1;
        }
        else if(yemek == 'P' || yemek == 'p'){ /*Patates için saðlýk ve açlýk barýnýn nasýl þekilleneceðini ayarladým.*/
            if(patates <= 0) { /*Eðer kalan patates sayýsý sýfýra eþit yada küçükse daha fazla patates tüketemiyorr*/
                printf("Daha fazla patates alamazsýnýz\n");
                continue;
            }            
            barSaglik +=15;
            barAclik += 5;
            patates -=1;
        }
        else if(yemek == 'S' || yemek == 's') { /*Salata için saðlýk ve açlýk barýnýn nasýl þekilleneceðini ayarladým.*/
            if(salata <= 0) { /*Eðer kalan salata sayýsý sýfýra eþit yada küçükse daha fazla salata tüketemiyor*/
                printf("Daha fazla salata alamazsýnýz\n");
                continue;
            }            
            barSaglik +=35;
            barAclik -=10;
            salata -=1;
        }
        else if(yemek == 'Y' || yemek == 'y') { /*Yumurta için saðlýk ve açlýk barýnýn nasýl þekilleneceðini ayarladým.*/
            if(yumurta <= 0) { /*Eðer kalan yumurta sayýsý sýfýra eþit yada küçükse daha fazla yumurta tüketemiyor*/
                printf("Daha fazla yumurta alamazsýnýz\n");
                continue;
            }            
            barSaglik +=25;
            barAclik -=5;
            yumurta -= 1;
        }
        else if (yemek == 'Q' || yemek == 'q') /*Eðer hiçbir þey yenmez ise saðlýk ve açlýk barýnýn nasýl þekilleneceðini ayarladým*/
        {
            barSaglik -= 10;
            barAclik -= 10;
        }   


        if(barAclik<25) { /*Eðer açlýk barý 25`ten kðçðkse saðlýk barý deðiþecek*/
            barSaglik -= 25;
        }

        
        if(barSaglik > 100) { /*Saðlýk barýnýn max kapasitesi 100 olarak ayarlandý*/
            barSaglik = 100;
        }
        if(barSaglik <= 0) { /*Saðlýk barýnýn min kapasitesi 0 olarak ayarlandý*/
            barSaglik = 0;
        }
        if(barAclik > 100) { /*Açlýk barýnýn max kapasitesi 100 olarak ayarlandý*/
            barAclik = 100;
        }
        if(barAclik <= 0) { /*Açlýk barýnýn min kapasitesi 0 olarak ayarlandý*/
            barAclik = 0;
        }

        gun+=1;
        barSaglik-=1; /*Her gün saðlýk barý düþer*/

        /*30 gün sonunda eðer saðlýk barý 10`un altýna düþmediyse kazanma þartý gerçekleþir*/
        if(gun == 30) { 
            printf("Tebrikler kazandýnýz.");
        }
        else if(barSaglik<10) { /*Saðlýk barý 10`un altýna düþtüðünde kaybetme þartý gerçekleþir*/
            printf("Malesef kaybettiniz");
            break;
        }
    }
    return 0;
}