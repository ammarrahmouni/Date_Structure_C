#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int soru();
int recursive();

int main(){
    int x;
    int y;
    printf("Tekrar Sayi Giriniz:");
    scanf("%d", &x);
    printf("Toplam : %d\n", soru(x));
    printf("Recursive fonk sayi giriniz:");
    scanf("%d", &y);
    printf("Recu fonk: %d", recursive(y));
    

    return 0;
}
int soru(int x)
{
    int a = 1;
    int b = 1;
    int c;
    for(int i = 0; i <= x; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int recursive(int y)
{
    if(y == 0)
    return 1;
    return y * recursive(y - 1); // استدعاء الدالة بقلب الدالة
}