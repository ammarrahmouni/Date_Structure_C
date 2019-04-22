#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node * next;
}node;

void bastir();
struct node * enq();
struct node * deq();

int main(){
    node * root = NULL;
    root = enq(root, 5);
    root = enq(root, 10);
    root = enq(root, 30);
    root = enq(root, 20);
    root = enq(root, 100);
    root = enq(root, 0);
    bastir(root);
    printf("Yeni List\n");
    root = deq(root);
    root = deq(root);
    root = deq(root);
    root = deq(root);
    root = deq(root);

    bastir(root);

    
}
void bastir(node * r){
    while(r != NULL){
        printf("%d\n", r -> x);
        r = r -> next;
    }
}
struct node * enq(node * r, int x){
    if(r == NULL){
        r = (node *) malloc (sizeof(node));
        r -> x = x;
        r -> next = NULL;
        return r;
    }
    node * iter = r;
    while(iter -> next != NULL){
        iter = iter -> next;
    }
    node * temp;
    temp = (node *) malloc (sizeof(node));
    iter -> next = temp;
    temp -> next = NULL;
    temp -> x = x;
    return r;
}
struct node * deq(node * r, int x){
    if(r == NULL){
        printf("Liste bos!");
        return r;
    }
    if(r -> next == NULL){
        int valu = r -> x;
        free(r);
        r = NULL;
        printf("Listedekei son elemani silindi!\n");
        return r;
    }
    node * iter = r;
    r = r -> next;
    free(iter);
    return r;
}