#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node * right;
    struct node * left;
}node;

void dolas();
void dolas1();
int search();
int max();
int min();
struct node * ekleme();

int main(){

    node * root = NULL;

    // Ekleme işlemleri
    root = ekleme(root, 10);
    root = ekleme(root, 0);
    root = ekleme(root, 100);
    root = ekleme(root, 50);
    root = ekleme(root, 300);
    root = ekleme(root, 150);
    root = ekleme(root, 20);
    // Ekleme işlemleri

    // Dolaşma işlemleri
    printf("Numbers from small to big:\n");
    dolas(root);
    printf("\n");
    printf("Numbers from big to small:\n");
    dolas1(root);
    printf("\n");
    // Dolaşma işlemleri

    // Aram işlemleri
    printf("Arama islemleri:\n");
    printf("arama sonucu: %d\n", search(root, 10));
    printf("arama sonucu: %d\n", search(root, 150));
    printf("arama sonucu: %d\n", search(root, 1500));
    // Aram işlemleri

    // en büyük ve en küçük sayilar bulma işlemleri
    printf("En buyuk ve En kucuk sayilar bulma\n");
    printf("Max Number is : %d\n", max(root));
    printf("Min Number is : %d\n", min(root));
    // en büyük ve en küçük sayilar bulma işlemleri
    
    return 0;
}

// Ekleme Fonksiyonu
struct node * ekleme(node * r, int x){
    if(r == NULL)
    {
        r = (node *) malloc (sizeof(node));
        r -> x = x;
        r -> left = NULL;
        r -> right = NULL;
        return r;
    }
    if(r -> x < x)
    {
        r -> right = ekleme(r -> right, x);
        return r;
    }
    if(r -> x > x)
    {
        r -> left = ekleme(r -> left, x);
        return r;
    }
}
// Ekleme Fonksiyonu

// Arama Fonksiyonu
int search(node * r, int x){
    if(r == NULL)
        return -1;
    if(r -> x == x)
    {
        return 1;
    }
    if(search(r -> left, x) == 1){
        return 1;
    }
    if(search(r -> right, x) == 1){
        return 1;
    }
    if(search(r -> right, x) == 0 && search(r -> left, x) == 0){
        return -1;
    }
}
// Arama Fonksiyonu

// Dolaşma Fonksiyonu
void dolas(node * r){
    if(r == NULL)
        return;
    dolas(r -> left);
    printf("%d ", r -> x);
    dolas(r -> right);
}
// Dolaşma Fonksiyonu

// Dolaşma Fonksiyonu
void dolas1(node * r){
    if(r == NULL)
        return;
    dolas1(r -> right);
    printf("%d ", r -> x);
    dolas1(r -> left);
}
// Dolaşma Fonksiyonu



// En büyük sayi bulma Fonksiyonu
int max(node * r){
    if(r == NULL){
        printf("Tree is Embpty!");
        return -1;
    }
    while(r -> right != NULL){
        r = r -> right;
    }
    int max1 = r -> x;
    return max1;
}
// En büyük sayi bulma Fonksiyonu

// En küçük sayi bulma Fonksiyonu
int min(node * r){
    if(r == NULL){
        printf("Tree is Embpty!");
        return -1;
    }
    while(r -> left != NULL){
        r = r -> left;
    }
    int min1 = r -> x;
    return min1;

}
// En küçük sayi bulma Fonksiyonu