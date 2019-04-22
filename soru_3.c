#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    int yas;
    printf("bugun tarihiniz yaziniz:");
    scanf("%d", &year);
    printf("Yasiniz giriniz:");
    scanf("%d", &yas);
    int dugum = year - yas;
    printf("Dugum Tarihiniz: %d", dugum);
    return 0;
}