#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    int result = 0;

    for(int i=1; i<=500; i++) {
        if(i%2 != 0) {
            result += i;
        }
    }
    printf("Toplam sayý: %d", result);
    return 0;
}