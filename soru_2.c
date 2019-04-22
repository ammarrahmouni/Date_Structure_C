#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;

    printf("1.birnci sayi giriniz:");
    scanf("%d", &a);
    
    printf("2.birnci sayi giriniz:");
    scanf("%d", &b);
    
    printf("3.birnci sayi giriniz:");
    scanf("%d", &c);

    int sum = (a * a) + (b * b) + (3 * c);

    printf("sonuc: %d", sum);
    return 0;
}