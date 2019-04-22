#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node * next;
}node;

void bastir();
struct node * push();
int pop();
int main(){
    node * root;
    root = NULL;
    root = push(root, 5);;
    root = push(root, 10);
    root = push(root, 150);
    root = push(root, 100);
    root = push(root, 1050);
    root = push(root, 1000);
    bastir(root);
    printf("En son girelen Sayilar:\n");
    printf("%d\n", pop(root));
    printf("%d\n", pop(root));
    printf("%d\n", pop(root));
    printf("%d\n", pop(root));
    printf("%d\n", pop(root));
    printf("%d\n", pop(root));
    
    return 0;
}
void bastir(node * r){
    while(r != NULL)
    {
        printf("%d\n", r -> x);
        r = r -> next;
    }
}
struct node * push(node * r, int x){
    if(r == NULL)
    {
        r = (node *) malloc (sizeof(node));
        r -> x = x;
        r -> next = NULL;
        return r;
    }
    node * iter = r;
    while(iter -> next != NULL)
        iter = iter -> next;
    node * temp;
    temp = (node *) malloc (sizeof(node));
    iter -> next = temp;
    temp -> next = NULL;
    temp -> x = x;
    return r;
}
int pop(node * r){
    if(r == NULL)
    {
        printf("Stack is Empty!\n");
        return -1;
    }
    if(r -> next == NULL)
    {
        int value = r -> x;
        free(r);
        return value;
    }
    node * iter ;
    iter = r;
    while(iter -> next -> next != NULL)
        iter = iter -> next;
    int value;
    node * temp = iter -> next;
    value =  temp -> x;
    iter -> next = NULL;
    free(temp);
    return value;

}
