#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p; // الاعلان عن الموشرا
    int a = 10;
    p = &a;
    printf("%d\n", *p);
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("-------------\n");
    //استقبال قيم وتخزينها عن طريق الموشرات
    int x, y;
    int *x1, *y1;
    int top;
    int *top1;
    x1 = &x;
    y1 = &y;
    printf("Birnci Sayi giriniz:");
    scanf("%d", x1);
    printf("Ikinci Sayi Giriniz:");
    scanf("%d", y1);
    top = x + y;
    top1 = &top;
    printf("Toplam is : %d\n", *top1);

    return 0;
}