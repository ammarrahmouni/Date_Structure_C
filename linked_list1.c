#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node *next;
}node;

int main(){
    // loop ile  bir bağlı liste oluşturmak 
    node *root;
    root = (node *) malloc (sizeof(node));
    node * itern;
    itern = root;
    for(int i = 0; i < 5; i++)
    {
        itern -> next = (node *) malloc (sizeof(node));
        itern -> x = i * 5;
        printf("%d. kutut : %d\n", i + 1, itern -> x);
        itern -> next = NULL;
    }
    
    // listenin en son nodenin vardiğinda bir tane node ekle ve ona 100 değer ver 
    // listeye node eklemek
    if(itern -> next == NULL)
    {
        itern = (node *) malloc (sizeof(node));
        itern -> x = 100;
        printf("En son Nodeyi : %d\n", itern -> x);
    }


    return 0;
}