#include <stdio.h>
#include <stdlib.h>

void ekleme();
void bastir();
typedef struct node{
    int x;
    struct node * next;
}node;

int main(){
    node * root;
    root = (node *) malloc (sizeof(node));
    root -> x = 100;
    root -> next = NULL;
    node * iter;
    iter = root;
    for(int i = 1; i <= 5; i++)
    {
        ekleme(root, i * 5);
    }
    bastir(root);
    printf("-----------\nYeni liste\n");
    for(int i = 0; i < 2; i++)
    {
        iter = iter -> next;
    }
    node * temp;
    temp = (node *) malloc (sizeof(node));
    temp -> next = iter -> next;
    iter -> next = temp;
    temp -> x = 12;
    bastir(root);
    return 0;
}
void ekleme(node *r, int x){
    while(r -> next != NULL)
    {
        r = r -> next;
    }
    r -> next = (node *) malloc (sizeof(node));
    r -> next -> x = x;
    r -> next -> next = NULL;
}
void bastir(node *r){
    while(r != NULL)
    {
        printf("%d\n", r -> x);
        r = r -> next;
    }

}