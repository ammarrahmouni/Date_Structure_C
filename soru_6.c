#include <stdio.h>
#include <stdlib.h>

int main(){
    int dizi[20];
    dizi[0] = 1;
    dizi[1] = 1;
    for(int i = 2; i < 20; i++)
    {
        dizi[i] = dizi[i - 1] + dizi[i - 2]; 
        printf("%d.dizi[%d] = %d\n", i + 1, i + 1, dizi[i]);
    }
    
    return 0;
}