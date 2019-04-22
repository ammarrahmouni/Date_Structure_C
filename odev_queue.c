#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

void bastir();
struct node * EnQueue();
struct node * DeQueue();

int main(){
    node * Q = NULL;
    Q = EnQueue(Q, 3);
    Q = EnQueue(Q, 33);
    Q = EnQueue(Q, 333);
    Q = EnQueue(Q, 3333);
    Q = EnQueue(Q, 33333);
    Q = EnQueue(Q, 333333);
    Q = EnQueue(Q, 3333333);
    bastir(Q);
    printf("------------\n");
    Q = DeQueue(Q);
    Q = DeQueue(Q);
    Q = DeQueue(Q);
    bastir(Q);
    return 0;
}
struct node * DeQueue(node * r){
    if(r == NULL)
    {
        printf("List bos!");
        return r;
    }
    if(r -> next == NULL)
    {
        
        free(r);
        r = NULL;
        printf("Listedeki son eleman silindi!\n");
        return r;
    }
    node * iter = r;
    r = r -> next;
    free(iter);
    return r;
}
struct node * EnQueue(node * r, int data){
    if(r == NULL)
    {
        r = (node *) malloc (sizeof(node));
        r -> data = data;
        r -> next = NULL;
        return r;
    }
    node * iter = r;
    while(iter -> next != NULL)
    {
        iter = iter -> next;
    }
    node * temp;
    temp = (node *) malloc (sizeof(node));
    iter -> next = temp;
    temp -> next = NULL;
    temp -> data = data;
    return r;
}
void bastir(node * r){
    while(r != NULL)
    {
        printf("%d\n", r -> data);
       
        r = r -> next;
        
    }  
}