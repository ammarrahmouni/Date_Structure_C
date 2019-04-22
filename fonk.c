#include <stdio.h>
#include <stdlib.h>


int fon();
int fonks();

int main()
{
    
    int x;
    int y , z;
    printf("Bir Sayi Giriniz:");
    scanf("%d", &x);
    printf("x! = %d\n", fon(x));
    printf("Iki sayi Giriniz:\n");
    scanf("%d %d", &y , &z);
    printf("komposiyon : %d", fonks(y, z));
    return 0;
}

int fonks(int y, int z)
{
    return fon(y) / (fon(z) * fon(y - z));
}

int fon(int x)
{
    int sonuc = 1;
    for(int i = 1; i <= x; i++)
    {
        sonuc *= i;
    }
    return sonuc;
}