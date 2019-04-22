#include <stdio.h>
#include <stdlib.h>

void ekle();
void bastir();
typedef struct node{
    int x;
    struct node * next;
    struct node * prev;
}node;
int main(){
    node * root;
    root = (node *) malloc (sizeof(node));
    root -> x = 10;
    root -> next = NULL;
    root -> prev = NULL;
   
    for(int i = 0; i < 5; i++)
    {
        ekle(root, i * 5);
    }
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
void ekle(node * r, int x){
    while(r -> next != NULL)
    {
        r = r -> next;
    }
    node * iter;
    iter = r;
    iter -> next = (node *)malloc(sizeof(node));
    iter -> next -> x = x;
    iter -> next -> next = NULL;
    iter -> next -> prev = iter;
}
