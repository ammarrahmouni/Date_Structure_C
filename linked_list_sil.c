#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node * next;
}node;
struct node * siraliekl();
struct node * sil();
void bastir();

int main(){
    node * root;
    root = NULL;
    root = siraliekl(root, 40);
    root = siraliekl(root, 10);
    root = siraliekl(root, 100);
    root = siraliekl(root, 150);
    root = siraliekl(root, 0);
    root = siraliekl(root, 200);
    bastir(root);
    printf("-----------\n");
    printf("Yeni Liste\n");
    root = sil(root, 100);
    root = sil(root, 0);
    root = sil(root, 200);
    root = sil(root, 2000);
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
struct node * siraliekl(node * r, int x){
    if(r == NULL)
    {
        r = (node *) malloc (sizeof(node));
        r -> x = x;
        r -> next = NULL;
        return r;
    }
    if(r -> x > x)
    {
        node * temp;
        temp = (node *) malloc (sizeof(node));
        temp -> x = x;
        temp -> next = r;
        return temp;
    }
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
struct node *sil(node * r, int x){
    node * iter = r; 
    node * temp;
    if(r -> x == x)
    {
        node * temp;
        temp = r ;
        r = r -> next;
        free(temp);
        return r;
    }
    while(iter -> next != NULL && iter -> next -> x != x)
    {
        iter = iter -> next;
    }
    if(iter -> next == NULL)
    {
        printf("Sayi bulunmadi\n");
       return r;
    }

        temp = iter -> next;
        iter -> next = iter -> next -> next;
        free(temp);
        return r;
}