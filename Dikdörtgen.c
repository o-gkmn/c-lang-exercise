#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int satir;
    int sutun;

    printf("Uzun kenar� girin...");
    scanf("%d", &sutun);
    printf("K�sa kenar� girin...");
    scanf("%d", &satir);

    for(int i = 1; i<=sutun; i++){
        for(int j = 1; j<=satir; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}