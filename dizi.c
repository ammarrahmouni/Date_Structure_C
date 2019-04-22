#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    int u = 1;
    for(int i = 0; i < 10; i++)
    {
        a[i] = i + 1;
        printf("%d\n", a[i]);
    }
    printf("-----------\n");
    int b[] = {10, 7, 9, 15, 6, 3, 4}; // dinamik dizi
    for(int i = 0; i < 6; i++)
    {
        printf("%d.%d\n", i + 1, b[i]);
        
    }
    printf("-----------\n");
    // Bir Dizinin Tersi Yazdırmak
    for(int i = 5; i >= 0; i--)
    {
        printf("%d.%d\n", u, b[i]);
        u++;
    }
    printf("-----------\n");
    // en büyük sayı
    int max;
    max = b[0];
    for(int i = 0; i < 6; i++)
    {
        
        if(max < b[i + 1])
        {
            max = b[i + 1];
        }
        else 
        continue;
        
    }
    printf("En buyuk sayi :%d\n", max);
    printf("-----------\n");
    //En küçük sayi
    int min;
    min = b[0];
    for(int i = 0; i < 6; i++)
    {
        if(min > b[i + 1])
        {
            min = b[i + 1];
        }
        else
        continue;
    }
    printf("En kucuk sayi:%d\n", min);
    printf("-----------\n");
    // Bir Dizinin Tersi Diğer Bir Diziye Koymak
    int c[6];
    for(int i = 0; i < 6; i++)
    {
        c[i] = b[5 - i];
        printf("%d\n", c[i]);
    }
    printf("-----------\n");
    
    return 0;
}