#include<stdio.h>
#include<locale.h>

int main()  {
    setlocale(LC_ALL, "Turkish");

    int radius = 0;
    int alan;
    
    while(radius != -1) {
        printf("Yarý çapý giriniz... ");
        scanf("%d", &radius);

        alan = 3*radius*radius;
        printf("\nDairenin alaný: %d\n", alan);
    }
    return 0;
}