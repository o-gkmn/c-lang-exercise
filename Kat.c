#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int carpim;
    int i = 1;
    int n = 0;

    while(n != -1) {

        printf("5'in kaçýncý katýný hesaplmak istiyorsunuz: ");
        scanf("%d", &n);

        if(n == -1){
            break;
        }

        carpim = 5*n;
        printf("Çarpým: %d\n", carpim);
    }
    return 0;
}