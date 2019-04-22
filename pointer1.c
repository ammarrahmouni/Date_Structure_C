#include <stdio.h>
#include <stdlib.h>

int main(){
    int dizi[10];
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        printf("%d.Sayi Giriniz:", i + 1);
        scanf("%d", &dizi[i]);
        sum += dizi[i];
    }
    printf("Toplam is : %d\n", sum);
    printf("-------------\n");

    int dizi1[10] = {1, 4, 6, 83, 2};
    int *p;
    p = dizi1;
    for(int i = 0; i < 5; i++)
    {
        printf("%d.dizi[%d] = %d\n", i + 1, i + 1, *(p + i));
    }
    printf("-------------\n");
    int dizi2[4];
    int *q;
    q = dizi2;
    for(int i = 0; i < 4; i++)
    {
        printf("%d.Sayi Griniz: ", i + 1);
        scanf("%d", (q + i));
    }
    int sum1 = 0;
    int *sum2 = &sum1;
    for(int i = 0; i < 4; i++)
    {
        *sum2 += *(q + i);
        
    }
    printf("Girdiginiz Sayilarin Ortalamasi: %d\n", *(sum2) / 4);
    printf("-------------\n");
    // انشاء مصفوفة ديناميكية عن طريق المزشرات
    int *s = (int *)malloc(sizeof(int) * 100); // نستطيع استخدمها مثل المصفوقة العادية
    s[40] = 78;
    printf("%d", s[40]);
    return 0;
}