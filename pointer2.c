#include <stdio.h>
#include <stdlib.h>

void point();

int main(){
    int x, y;
    int *p, *q;
    p = &x;
    q = &y;
    printf("Birinci Sayi Giriniz: ");
    scanf("%d", p);
    printf("Ikinci Sayi Giriniz: ");
    scanf("%d", q);
    point(p, q);
    
    return 0;
}
void point(int *p1, int *q1)
{
    int sum = 0;
    int *sum1;
    sum1 = &sum;
    *sum1 = *p1 + *q1;
    printf("Toplam Is: %d", *sum1);
}
