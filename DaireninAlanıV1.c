#include<stdio.h>
#include<locale.h>

int main()  {
    setlocale(LC_ALL, "Turkish");

    int radius = 0;
    int alan;
    
    while(radius != -1) {
        printf("Yar� �ap� giriniz... ");
        scanf("%d", &radius);

        alan = 3*radius*radius;
        printf("\nDairenin alan�: %d\n", alan);
    }
    return 0;
}