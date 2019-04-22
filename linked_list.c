#include <stdio.h>
#include <stdlib.h>

// ilk bağlı liste oluştutrmak

typedef struct node{
    int x;
    struct node * next;
}node;

int main(){
    node *root;
    root = (node *) malloc (sizeof(node));
    root -> x = 50;
    root -> next = (node *) malloc (sizeof(node));
    root -> next -> x = 100;
    root -> next -> next = (node *) malloc (sizeof(node));
    root -> next -> next -> x = 150;
    node * iter;
    iter = root;
    printf("%d\n", iter -> x);
    iter = iter -> next;
    printf("%d\n", iter -> x);
    iter = iter -> next;
    printf("%d\n", iter -> x);
    return 0;
}
