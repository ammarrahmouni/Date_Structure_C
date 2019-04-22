#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int x;
    struct node * left;
    struct node * right;
}node;
void bastir(node * r);
struct node * ekle ();

int main(){
    node * root = NULL;
    root = ekle(root, 5);
    root = ekle(root, 0);
    root = ekle(root, 10);
    root = ekle(root, 50);
    root = ekle(root, -5);
    root = ekle(root, 41);
    bastir(root);
    return 0;
}

struct node  * ekle(node * r, int x){
    if(r == NULL)
    {
        r = (node *) malloc (sizeof(node));
        r -> x = x;
        r -> right = NULL;
        r -> left = NULL;
        return r;
    }
    if(r -> x < x)
    {
        r -> right = ekle(r -> right, x);
        return r;
    }
    if(r -> x > x)
    {
        r -> left = ekle(r -> left, x);
        return r;
    }
}

void bastir(node * r){
    if (r == NULL)
        return;
    bastir(r -> left);
    printf("%d\n", r -> x);
    bastir(r -> right);
}