#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node * next;
    struct node * prev;
}node;

struct node * siraek();
struct node * silmek();
void bastir();

int main(){
    node * root ;
    root = NULL;
    root = siraek(root, 100);
    root = siraek(root, 0);
    root = siraek(root, 300);
    root = siraek(root, 3000);
    root = siraek(root, 120);
    root = siraek(root, 150);
    root = siraek(root, 1000);
    printf("cift yonlu Sirali list\n");
    bastir(root);
    printf("cift yonlu listeninden eleman silmek\n");
    root = silmek(root, 0);
    root = silmek(root, 45);
    root = silmek(root, 300);
    
    bastir(root);
    return 0;
}
void bastir(node * r){
    while(r != NULL)
    {
        printf("%d\n", r -> x);
        r = r -> next;
    }
}
struct node * siraek(node * r, int x){
    if(r == NULL)
    {
        r = (node *)malloc(sizeof(node));
        r -> x = x;
        r -> next = NULL;
        r -> prev = NULL;
        return r;
    }
    if(r -> x > x)
    {
        node * temp;
        temp = (node *) malloc (sizeof(node));
        temp -> x = x;
        temp -> next = r;
        temp -> prev = NULL;
        r -> prev = temp;
        return temp;
    }
    node * iter = r;
    while(iter -> next != NULL && iter -> next -> x < x)
    {
        iter = iter -> next;
    }
    node * temp;
    temp = (node *) malloc (sizeof(node)); 
    temp -> next = iter -> next;
    iter -> next = temp;
    temp -> prev = iter;
    if(temp -> next != NULL)
    {
        temp -> next -> prev = temp;
    }
    temp -> x = x;
    return r;
}
struct node * silmek(node * r, int x){
    if(r -> x == x)
    {
        node * temp;
        temp = r;
        r = r -> next;
        r -> prev = NULL;
        free(temp);
        return r;
    }
    node * iter = r;
    while(iter -> next != NULL && iter -> next -> x != x)
    {
        iter = iter -> next;
    }
    if(iter -> next == NULL)
    {
        printf("Sayi bulunmadi\n");
        return r;
    }
    node * temp;
    temp = iter -> next;
    iter -> next = iter -> next -> next;
    free(temp);
    if(iter -> next != NULL)
    {
        iter -> next -> prev = iter;
    }
    return r;
}