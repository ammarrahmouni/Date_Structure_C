#include <stdio.h>
#include <stdlib.h>

void bastir();
void ekle();

typedef struct node{
    int x;
    struct node * next;
}node;

int main(){
    node *root;
    root = (node *) malloc (sizeof(node));
    root -> x = 100;
    root -> next = NULL; 
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
void ekle(node *r, int x){
    while(r -> next != NULL)
    {
        r = r -> next;
    }
    r -> next = (node *) malloc (sizeof(node));
    r -> next -> x = x;
    r -> next -> next = NULL;
}