#include <stdio.h>
#include <stdlib.h>

int hesap();

int main(){
    int x;
    printf("Karenin boyutu Giriniz:");
    scanf("%d", &x);
    printf("Karenin Toplam Sayisi: %d", hesap(x));
    return 0;
}
int hesap(int x)
{
    if(x == 1)
    return 1;
    return hesap(x - 1) * 4 + 1;
}