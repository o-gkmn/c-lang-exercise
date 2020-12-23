/*author: ozgur*/
#include<stdio.h>
#include<locale.h>

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "Turkish");

    printf("###############################\n");
    printf("    Survivor`a ho� geldiniz\n");
    printf("###############################\n\n");
    printf("Oyunu kazanabilmek i�in 30 g�n boyunca sa�l�k bar�n�n 10`un alt�na d��memesi laz�m.\n");

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
        printf("\nSa�l�k: %d A�l�k: %d G�n: %d\n\n", barSaglik, barAclik, gun);
        printf("Bug�n ne yemek isterdiniz? \n>>>Et(+30 sa�l�k ve +75 a�l�k)\n>>>Patates(+15 sa�l�k ve +5 a�l�k)");
        printf("\n>>>Salata(+35 sa�l�k ve -10 a�l�k)\n>>>Yumurta(+25 sa�l�k ve -5 a�l�k)\n\n");

        printf("---- Yemek stoklar� -----\n");
        printf("Et: %d\n", et);
        printf("Patates: %d\n", patates);
        printf("Salata: %d\n", salata);
        printf("Yumurta: %d\n", yumurta);
        printf("\nEt i�in \"E\"\nPatates i�in \"P\"\n");
        printf("Salata i�in \"S\"\nYumurta i�in \"Y\" harfini tu�lay�n\n");
        
        printf("E�er yemek yemek istemiyorsan�z q tu�una t�klay�n.\n");
        scanf(" %c", &yemek);

        if(yemek == 'E' || yemek == 'e') {  /*Et i�in sa�l�k ve a�l�k bar�n�n nas�l �ekillenece�ini ayarlad�m.*/
            if(et<=0) {  /*E�er kalan et say�s� s�f�ra e�it yada k���kse daha fazla et t�ketemiyor*/
                printf("Daha fazla et alamazs�n�z\n");
                continue;
            }
            barSaglik += 30;
            barAclik += 75;
            et -=1;
        }
        else if(yemek == 'P' || yemek == 'p'){ /*Patates i�in sa�l�k ve a�l�k bar�n�n nas�l �ekillenece�ini ayarlad�m.*/
            if(patates <= 0) { /*E�er kalan patates say�s� s�f�ra e�it yada k���kse daha fazla patates t�ketemiyorr*/
                printf("Daha fazla patates alamazs�n�z\n");
                continue;
            }            
            barSaglik +=15;
            barAclik += 5;
            patates -=1;
        }
        else if(yemek == 'S' || yemek == 's') { /*Salata i�in sa�l�k ve a�l�k bar�n�n nas�l �ekillenece�ini ayarlad�m.*/
            if(salata <= 0) { /*E�er kalan salata say�s� s�f�ra e�it yada k���kse daha fazla salata t�ketemiyor*/
                printf("Daha fazla salata alamazs�n�z\n");
                continue;
            }            
            barSaglik +=35;
            barAclik -=10;
            salata -=1;
        }
        else if(yemek == 'Y' || yemek == 'y') { /*Yumurta i�in sa�l�k ve a�l�k bar�n�n nas�l �ekillenece�ini ayarlad�m.*/
            if(yumurta <= 0) { /*E�er kalan yumurta say�s� s�f�ra e�it yada k���kse daha fazla yumurta t�ketemiyor*/
                printf("Daha fazla yumurta alamazs�n�z\n");
                continue;
            }            
            barSaglik +=25;
            barAclik -=5;
            yumurta -= 1;
        }
        else if (yemek == 'Q' || yemek == 'q') /*E�er hi�bir �ey yenmez ise sa�l�k ve a�l�k bar�n�n nas�l �ekillenece�ini ayarlad�m*/
        {
            barSaglik -= 10;
            barAclik -= 10;
        }   


        if(barAclik<25) { /*E�er a�l�k bar� 25`ten k���kse sa�l�k bar� de�i�ecek*/
            barSaglik -= 25;
        }

        
        if(barSaglik > 100) { /*Sa�l�k bar�n�n max kapasitesi 100 olarak ayarland�*/
            barSaglik = 100;
        }
        if(barSaglik <= 0) { /*Sa�l�k bar�n�n min kapasitesi 0 olarak ayarland�*/
            barSaglik = 0;
        }
        if(barAclik > 100) { /*A�l�k bar�n�n max kapasitesi 100 olarak ayarland�*/
            barAclik = 100;
        }
        if(barAclik <= 0) { /*A�l�k bar�n�n min kapasitesi 0 olarak ayarland�*/
            barAclik = 0;
        }

        gun+=1;
        barSaglik-=1; /*Her g�n sa�l�k bar� d��er*/

        /*30 g�n sonunda e�er sa�l�k bar� 10`un alt�na d��mediyse kazanma �art� ger�ekle�ir*/
        if(gun == 30) { 
            printf("Tebrikler kazand�n�z.");
        }
        else if(barSaglik<10) { /*Sa�l�k bar� 10`un alt�na d��t���nde kaybetme �art� ger�ekle�ir*/
            printf("Malesef kaybettiniz");
            break;
        }
    }
    return 0;
}