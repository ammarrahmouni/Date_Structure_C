#include <stdio.h>
#include <stdlib.h>


struct node * siraliekle();
void bastir();
typedef struct node{
    int x;
    struct node * next;
}node;

int main(){
    node * root;
    root = NULL;
    root = siraliekle(root, 40);
    root = siraliekle(root, 350);
    root = siraliekle(root, 100);
    root = siraliekle(root, 300);
    root = siraliekle(root, 50);
    root = siraliekle(root, 400);
    root = siraliekle(root, 10);
    root = siraliekle(root, 0);
    bastir(root);
    return 0;
}
void bastir(node *r){
    while(r != NULL)
    {
        printf("%d\n", r -> x);
        r = r -> next;
    }
}

struct node * siraliekle(node *r, int x){
    if(r == NULL)
    { // link list boşsa durumum
        r = (node *) malloc (sizeof(node));
        r -> x = x;
        r -> next = NULL;
        return r;
    }
    if(r -> x > x)
    { // ilk elemanddan kucuk durumu , root değişiyor
        node * temp;
        temp = (node *) malloc (sizeof(node));
        temp -> x = x;
        temp -> next = r;
        return temp;
    }
    // gelen sayi ilk elemanlardan buyuk ve son elemanlardan kucuk ise durumu
    node * iter = r;
    while(iter -> next != NULL && iter -> next -> x < x)
    {
        iter = iter -> next;
    }
    node * temp = (node *) malloc (sizeof(node));
    temp -> next = iter -> next;
    iter -> next = temp;
    temp -> x = x;
    return r;
    
}
