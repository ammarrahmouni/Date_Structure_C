#include <stdio.h>
#include <stdlib.h>

// تعريف البنية هي باختصار نفس الكلاس بلغ الجافا نستطيع الان ان ننشئ كائنات من هذه الكلاس
typedef struct{
    int yas;
    char *isim;
    char *soy;
    char *telefon;
} insan;
int emeklimi();
int main(){
    insan ogrenci; //هنا قمنا بانشاء الكائن والذي اسمه عمار ونستطيع الان الوصول للمتغيرات الموجودة في الكلاس

   ogrenci.isim = (char *) malloc (sizeof(char) * 20);
   ogrenci.soy = (char *) malloc (sizeof(char) * 20);
   ogrenci.telefon = (char *) malloc (sizeof(char) * 11);
    printf("1.Ogrenci icin Gerk Bilgileri\n");
    printf("Adiniz Giriniz: ");
    scanf("%s", ogrenci.isim);
    printf("Soyadiniz Giriniz:");
    scanf("%s", ogrenci.soy);
    printf("Yasiniz Giriniz: ");
    scanf("%d", &ogrenci.yas);
    printf("Telefon Numariniz Giriniz: ");
    scanf("%s", ogrenci.telefon);


    insan *ogrenci1; // انشاء كائنات من الكلاس ولكن بواسطة الموشرات
    
    ogrenci1 = (insan *) malloc(sizeof(insan));
    ogrenci1->isim = (char *) malloc (sizeof(char) * 20);
    ogrenci1->soy = (char *) malloc (sizeof(char) * 20);
    ogrenci1->telefon = (char *) malloc (sizeof(char) * 11);
    printf("2.Ogrenci icin Gerk Bilgileri\n");
    printf("Adiniz Giriniz: ");
    scanf("%s", ogrenci1->isim);
    printf("Soyadiniz Giriniz:");
    scanf("%s", ogrenci1->soy);
    printf("Yasiniz Giriniz: ");
    scanf("%d", &ogrenci1->yas);
    printf("Telefon Numariniz Giriniz: ");
    scanf("%s", ogrenci1->telefon);

    printf("-------------\n");
    printf("1.Ogrencinin Bilgileri:\n");
    printf("Adini: %s %s\n", ogrenci.isim, ogrenci.soy);
    printf("Yasigi: %d\n", ogrenci.yas);
    printf("Telefon Numarasi: %s\n", ogrenci.telefon);
    printf("-------------\n");
    printf("2.Ogrencinin Bilgileri:\n");
    printf("Adini: %s %s\n", ogrenci1->isim, ogrenci1->soy);
    printf("Yasigi: %d\n", &ogrenci1->yas);
    printf("Telefon Numarasi: %s\n", ogrenci1->telefon);
    printf("-------------\n");
    // علاقة البنية باالدوال    
    printf("Ammar Emekli mi? %d\n", emeklimi(&ogrenci.yas));
    printf("Ali Emeki mi? %d\n", emeklimi(&ogrenci1->yas));
    return 0;
}
int emeklimi(insan *birey){
    if (birey->yas > 60)
    return 1;
    else
    return 0;
}